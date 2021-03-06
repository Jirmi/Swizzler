/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray, NSString;

@interface GTServiceDiscoveredService : _ABAddressBookAddRecord
{
    NSString *_identifier;
    NSString *_versionString;
    unsigned int _majorVersion;
    unsigned int _minorVersion;
    unsigned int _revisionVersion;
    unsigned int _buildVersion;
    NSArray *_versionStringArray;
}

- (id)versionStringArray;
- (unsigned int)buildVersion;
- (unsigned int)revisionVersion;
- (unsigned int)minorVersion;
- (unsigned int)majorVersion;
- (id)versionString;
- (id)identifier;
- (id)description;
- (BOOL)isEqual:(id)fp8;
- (void)dealloc;
- (id)initWithServiceDictionary:(id)fp8;

@end

