/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSArray, NSDirectoryEnumerator;

@interface GDDirectoryEnumeratorWrapper : _CATransform3DMakeScale
{
    NSDirectoryEnumerator *enumerator;
    NSArray *keys;
}

- (void)skipDescendents;
- (void)skipDescendants;
- (unsigned int)level;
- (id)fileAttributes;
- (id)directoryAttributes;
- (unsigned int)countByEnumeratingWithState:(CDAnonymousStruct1 *)fp8 objects:(id *)fp12 count:(unsigned int)fp16;
- (id)nextObject;
- (id)allObjects;
- (id)initWithDirectoryEnumerator:(id)fp8;

@end

