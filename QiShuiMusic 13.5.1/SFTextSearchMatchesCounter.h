@interface SFTextSearchMatchesCounter : NSObject
@property (nonatomic) NSOrderedSet allFoundRanges;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)invalidate;
- (void)foundRange:forSearchString:inDocument:;
- (void)invalidateFoundRange:inDocument:;
- (void)finishedSearching;
- (id)allFoundRanges;
- (id)initWithQueryString:completionHandler:;
- (BOOL)canSkipCountingMatchesForQueryString:wordMatchMethod:;
@end
