@interface INExecutionInfoResolver : NSObject
@property (nonatomic) NSDictionary _counterpartMapping;
@property (nonatomic) INExecutionCounterpartMapper _counterpartMapper;
@property (nonatomic) INExecutionFrameworkMapper _frameworkMapper;
- (id)counterpartIdentifiersForLocalIdentifier:;
- (id)_frameworkMapper;
- (void).cxx_destruct;
- (id)localIdentifiersForCounterpartIdentifier:;
- (id)counterpartBundleIdentifiersForBundleIdentifier:;
- (id)_counterpartMapper;
- (id)resolveIntentExecutionInfo:;
- (id)resolveUserActivityExecutionInfo:;
- (id)_resolveExecutionInfo:;
- (id)_resolveExecutionInfoBySwappingIdentifiers:;
- (id)_resolveExecutionInfoByLinkingExtensionToApp:;
- (id)_resolveIntentExecutionInfoBySwappingIdentifiers:;
- (id)_resolveIntentExecutionInfoByLinkingExtensionToApp:;
- (id)_resolveIntentExecutionInfoUsingCounterparts:;
- (id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:;
- (id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:;
- (id)_resolveUserActivityExecutionInfoUsingCounterparts:;
- (id)_counterpartMapping;
+ (id)defaultResolver;
@end
