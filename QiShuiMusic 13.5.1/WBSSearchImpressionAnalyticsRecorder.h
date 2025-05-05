@interface WBSSearchImpressionAnalyticsRecorder : NSObject
@property (nonatomic) NSArray searchProviders;
@property (nonatomic) WBSSearchProvider defaultSearchProvider;
- (id)init;
- (void).cxx_destruct;
- (void)setSearchProviders:;
- (void)setDefaultSearchProvider:;
- (id)defaultSearchProvider;
- (void)didActualizeImpressionForURL:provenance:;
- (id)searchProviderForURL:;
- (id)searchProviders;
+ (id)sharedRecorder;
@end
