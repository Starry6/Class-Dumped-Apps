@interface PPSpotlightScoring : NSObject
- (void)dealloc;
- (BOOL)refreshSpotlightScoringCacheWithError:;
- (id)initWithTopicStore:;
- (void).cxx_destruct;
- (id)spotlightQueryScore:error:;
+ (id)defaultInstance;
@end
