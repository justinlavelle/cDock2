//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ECEvent;

@protocol ECItemListActionHandling
- (void)performItemListActionAtIndex:(unsigned long long)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;

@optional
- (void)itemListDidScroll:(id)arg1;
- (void)itemListWillScroll:(id)arg1;
- (void)itemListItemSelectedAtIndex:(unsigned long long)arg1 sender:(id)arg2;
@end
