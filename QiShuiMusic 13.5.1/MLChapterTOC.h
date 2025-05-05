@interface MLChapterTOC : NSObject
- (unsigned int)chapterIndexForGroupIndex:groupingProperty:;
- (unsigned int)durationInMSOfGroupAtIndex:groupingProperty:;
- (unsigned int)countOfChapters;
- (unsigned int)countOfGroupsForProperty:;
- (id)urlPropertyOfChapterAtIndex:;
- (id)urlTitlePropertyOfChapterAtIndex:;
- (unsigned int)timeLocationInMSOfChapterAtIndex:;
- (id)titlePropertyOfChapterAtIndex:;
- (id)chapterDataRef;
- (unsigned int)groupIndexForChapterIndex:groupingProperty:;
- (unsigned int)groupIndexAtTimeLocationInMS:groupingProperty:;
- (unsigned int)timeLocationInMSOfGroupAtIndex:groupingProperty:;
- (BOOL)hasDataForProperty:;
- (unsigned int)chapterIndexAtTimeLocationInMS:;
@end
