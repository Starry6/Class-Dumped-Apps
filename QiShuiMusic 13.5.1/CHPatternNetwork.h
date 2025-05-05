@interface CHPatternNetwork : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFile:;
- (unsigned long long)stateTypeForNodeIndex:;
- (id)newCursorByAdvancingCursor:withSymbol:;
+ (id)contentTypesToPatternsMapping;
+ (id)patternToSymbolMap;
+ (id)rootCursorForContentType:inNetwork:forFirstSegmentGroup:;
+ (id)rootCursorForPatternType:inNetwork:forFirstSegmentGroup:;
+ (id)newCursorByAdvancingWithString:fromCursor:inNetwork:;
+ (id)newCursorByAdvancingWithSymbol:fromCursor:inNetwork:;
+ (BOOL)isString:fullPattern:inNetwork:;
@end
