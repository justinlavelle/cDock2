//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVWindowActionHandling.h"

@class WVExposeDragObject;

@protocol WVNewExposeActionHandling <WVWindowActionHandling>
- (void)darkenBackground:(BOOL)arg1 forExpose:(id)arg2;
- (void)windowExposeDrag:(WVExposeDragObject *)arg1 dragCompleteForSender:(id)arg2;
- (BOOL)windowExposeDrag:(WVExposeDragObject *)arg1 droppedAtLocation:(struct CGPoint)arg2 sender:(id)arg3;
- (void)windowExposeDrag:(WVExposeDragObject *)arg1 toLocation:(struct CGPoint)arg2 sender:(id)arg3;
- (void)windowExposeDrag:(WVExposeDragObject *)arg1 startedAtLocation:(struct CGPoint)arg2 sender:(id)arg3;
- (void)windowExposeWillStartDragAtLocation:(struct CGPoint)arg1 sender:(id)arg2;
@end
