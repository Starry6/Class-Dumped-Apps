@interface INUpcomingMediaManager : NSObject
@property (nonatomic) CSSearchableIndex index;
- (id)index;
- (id)initWithSearchableIndex:;
- (void).cxx_destruct;
- (void)setSuggestedMediaIntents:;
- (void)_setSuggestedMediaIntents:forBundleIdentifier:;
- (void)_replaceMediaIntents:forBundleIdentifier:;
- (void)setPredictionMode:forType:;
- (long long)_predictionModeForBundleId:type:error:;
- (id)keyWithMediaItemTypeName:bundleId:;
+ (id)sharedManager;
+ (id)mediaQueue;
@end
