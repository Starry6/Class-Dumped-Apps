@interface MLITChapterTOC : MLChapterTOC
- (void)dealloc;
- (unsigned int)chapterIndexForGroupIndex:groupingProperty:;
- (unsigned int)durationInMSOfGroupAtIndex:groupingProperty:;
- (unsigned int)countOfChapters;
- (unsigned int)countOfGroupsForProperty:;
- (id)urlPropertyOfChapterAtIndex:;
- (id)urlTitlePropertyOfChapterAtIndex:;
- (unsigned int)timeLocationInMSOfChapterAtIndex:;
- (id)titlePropertyOfChapterAtIndex:;
- (id)initWithChapterDataRef:totalTimeInMS:;
- (id)chapterDataRef;
- (id)_cachedCookieIndexMapForProperty:createIfNecessary:;
- (unsigned int)groupIndexForChapterIndex:groupingProperty:;
- (unsigned int)totalTimeInMS;
- (unsigned int)groupIndexAtTimeLocationInMS:groupingProperty:;
- (unsigned int)timeLocationInMSOfGroupAtIndex:groupingProperty:;
- (id)urlTitleTrimmingCharacterSet;
+ (id)_chapterDataCookieIndexMapForProperty:ofChapterTOC:;
+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:usingBlock:;
+ (void)enumerateChapterTimesInFlattenedChapterData:usingBlock:;
@end
