//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GTInfiniteScrollView.h"

#import "GTInfiniteScrollViewDataSource.h"
#import "GTInfiniteScrollViewDelegate.h"

@class NSDate;

@interface GTCalendarDatePickerInfiniteScrollView : GTInfiniteScrollView <GTInfiniteScrollViewDataSource, GTInfiniteScrollViewDelegate>
{
    int _mode;
    NSDate *_initialDate;
}

@property(retain, nonatomic) NSDate *initialDate; // @synthesize initialDate=_initialDate;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)snapToCell:(id)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)snapMonthPickerFromCell:(id)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)snapDayWeekPickerFromCell:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (float)heightForViewAtIndex:(int)arg1;
- (struct CGSize)infiniteScrollView:(id)arg1 sizeOfViewAtIndex:(int)arg2;
- (id)infiniteScrollView:(id)arg1 viewAtIndex:(int)arg2;
- (void)jumpToCellWithDay:(id)arg1;
- (id)dateForCellAtIndex:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 recentersView:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

