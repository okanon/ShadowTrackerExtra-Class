//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HSSearch : NSObject
{
}

+ (void)addDataCoreSpotlight:(id)arg1;
+ (long long)smallestOf:(long long)arg1 andOf:(long long)arg2;
+ (long long)smallestOf:(long long)arg1 andOf:(long long)arg2 andOf:(long long)arg3;
+ (float)compareString:(id)arg1 withString:(id)arg2;
+ (id)searchQueryTFIDF:(id)arg1 withSearchOptions:(int)arg2;
+ (_Bool)isMetaTypeMatchingWithFirstType:(int)arg1 secondType:(int)arg2;
+ (id)getFuzzyMatchesForString:(id)arg1 fromIndex:(id)arg2;
+ (id)filterQuery:(id)arg1 forSearchOptions:(int)arg2;
+ (float)getTypeWeightForType:(int)arg1;
+ (id)getNeighbourCharacter:(id)arg1;

@end

