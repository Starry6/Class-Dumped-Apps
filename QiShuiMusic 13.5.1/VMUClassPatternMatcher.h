@interface VMUClassPatternMatcher : NSObject
@property (nonatomic) BOOL matchingKindOfClass;
- (void)dealloc;
- (BOOL)isMatchingKindOfClass;
- (void)setMatchingKindOfClass:;
- (id)initWithPattern:forArgument:error:;
- (void)resetCachedMatches;
- (BOOL)_parseMallocSizePattern:error:;
- (BOOL)_regex:matchesName:;
- (BOOL)_matchesClassInfo:;
- (BOOL)matchesNodeDetails:orNodeDescription:;
@end
