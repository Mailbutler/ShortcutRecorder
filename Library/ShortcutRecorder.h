//
//  ShortcutRecorder.h
//  ShortcutRecorder
//  Copyright 2012 Contributors. All rights reserved.
//
//  License: BSD
//
//  Contributors to this file:
//      Jesper
//      Ilya Kulakov

#import <Cocoa/Cocoa.h>
#import <ShortcutRecorder/SRCommon.h>
#import <ShortcutRecorder/SRKeyCodeTransformer.h>
#import <ShortcutRecorder/SRModifierFlagsTransformer.h>
#import <ShortcutRecorder/SRKeyEquivalentTransformer.h>
#import <ShortcutRecorder/SRKeyEquivalentModifierMaskTransformer.h>
#import <ShortcutRecorder/SRValidator.h>
#import <ShortcutRecorder/SRRecorderControl.h>

#ifndef NSEDGEINSETS_DEFINED
    typedef struct NSEdgeInsets {
        CGFloat top;
        CGFloat left;
        CGFloat bottom;
        CGFloat right;
    } NSEdgeInsets;

    NS_INLINE NSEdgeInsets NSEdgeInsetsMake(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right) {
        NSEdgeInsets e;
        e.top = top;
        e.left = left;
        e.bottom = bottom;
        e.right = right;
        return e;
    }
#endif
