/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class AppointmentWrapper;

@interface KLCalendarMonthViewCellView : _ABAddressBookAddRecord
{
    AppointmentWrapper *appointment;
    int year;
    int month;
    int day;
    int row;
    BOOL highlighted;
}

- (void)setRow:(int)fp8;
- (int)row;
- (void)setDay:(int)fp8;
- (int)day;
- (void)setMonth:(int)fp8;
- (int)month;
- (void)setYear:(int)fp8;
- (int)year;
- (void)setAppointment:(id)fp8;
- (id)appointment;
- (BOOL)isHighlighted;
- (void)dealloc;
- (void)drawRect:(struct CGRect)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
