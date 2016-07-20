/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "DataSourceCache.h"

@class ConversationListItem, EmailListItemDAO, NSLock, NSMutableArray, NSMutableDictionary, NSThread;

@interface EmailDataSourceCache : DataSourceCache
{
    NSLock *_emailProcessLock;
    NSMutableDictionary *_conversationThreadDictionary;
    ConversationListItem *_conversation;
    BOOL _isCompleteLoadingAllEmails;
    EmailListItemDAO *_emailListItemDAO;
    NSThread *_emailLoadThread;
    NSMutableArray *_notificationQueue;
    id <EmailDataSourceCacheDelegate> _delegate;
    int _folderId;
    int _sortKey;
    int _unreadCount;
    int _totalCount;
    NSThread *_notificationQueueThread;
}

- (void)setNotificationQueueThread:(id)fp8;
- (id)notificationQueueThread;
- (void)setIsCompleteLoadingAllEmails:(BOOL)fp8;
- (BOOL)isCompleteLoadingAllEmails;
- (void)setTotalCount:(int)fp8;
- (int)totalCount;
- (void)setUnreadCount:(int)fp8;
- (int)unreadCount;
- (void)setSortKey:(int)fp8;
- (int)sortKey;
- (void)setFolderId:(int)fp8;
- (int)folderId;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setNotificationQueue:(id)fp8;
- (id)notificationQueue;
- (void)setEmailLoadThread:(id)fp8;
- (id)emailLoadThread;
- (void)setEmailListItemDAO:(id)fp8;
- (id)emailListItemDAO;
- (void)setConversationThreadDictionary:(id)fp8;
- (id)conversationThreadDictionary;
- (BOOL)isOlderEventEmail:(int)fp8 appointmentExists:(BOOL)fp12;
- (id)findEmailListItemForNotificationObject:(id)fp8 withNotificationType:(int)fp12;
- (id)findEmailListItemWithRecordNumber:(int)fp8;
- (id)findOriginalEmailListItemWithRecordNumber:(int)fp8;
- (void)flagMultiselectedEmailsInBackgroundWithUserInfo:(id)fp8;
- (void)flagEmailInBackgroundWithUserInfo:(id)fp8;
- (void)moveEmailsInBackgroundWithUserInfo:(id)fp8;
- (void)markMultiselectReadStatusInBackgroundWithUserInfo:(id)fp8;
- (void)markReadStatusInBackgroundWithUserInfo:(id)fp8;
- (void)deleteObjectsWithRecordNumbersInBackground:(id)fp8;
- (void)updateTotalCount;
- (void)updateUnreadCount;
- (BOOL)isCurrentFolder:(int)fp8;
- (void)reallyUpdateCounts;
- (void)updateCounts;
- (void)stopProcessingNotificationQueue;
- (void)startProcessNotificationQueue;
- (void)stopLoadingEmailListItems;
- (int)processCacheNotification:(id)fp8;
- (void)receiveProxyNotifications:(id)fp8;
- (void)processBatchLoad:(id)fp8 state:(int)fp12;
- (void)loadEmailsInBackgroundWithUserInfo:(id)fp8;
- (void)removeObjects:(id)fp8;
- (void)addOrReplaceObjects:(id)fp8;
- (void)queueNotificationWithEmail:(id)fp8 notification:(id)fp12;
- (void)processNotificationBatch:(id)fp8 type:(int)fp12;
- (void)processNotificationQueue;
- (void)moveMultiselectedEmailItemsToFolderId:(int)fp8;
- (void)moveEmailItems:(id)fp8 ToFolderId:(int)fp12;
- (void)markMultiselectedEmailsWithReadStatus:(BOOL)fp8;
- (void)emptyTrash;
- (void)deleteMultiselectedEmailItems;
- (unsigned int)multiselectedEmailItemCount;
- (id)allMultiselectedEmailAndThreadItems;
- (id)allMultiselectedEmailItems;
- (BOOL)areAllEmailItemsMultiselected;
- (void)setMultiselectedForAllEmailItems;
- (void)clearMultiselectOfAllEmailItems;
- (void)changeMultiselectOfAllEmailItemsInto:(BOOL)fp8;
- (void)flagMultiselectedEmailsWithFlag:(int)fp8;
- (void)userFlagEmailWithId:(int)fp8 withFlag:(int)fp12;
- (void)userUpdateEmailWithId:(int)fp8 toReadStatus:(BOOL)fp12;
- (void)userDeleteEmailsWithRecordNumbers:(id)fp8;
- (void)userMoveEmailsWithRecordNumbers:(id)fp8 toFolder:(int)fp12;
- (void)userDeleteAllEmailsInFolderId:(id)fp8;
- (void)userDeleteEmails:(id)fp8;
- (void)startEmailBatchLoad;
- (void)reloadEmails;
- (void)loadFromConversation;
- (BOOL)loadFolderWithId:(int)fp8 sortKey:(int)fp12;
- (void)conversationThreadingDidChange;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)initWithDelegate:(id)fp8;
- (void)dealloc;
- (id)conversation;
- (void)setConversation:(id)fp8;

@end
