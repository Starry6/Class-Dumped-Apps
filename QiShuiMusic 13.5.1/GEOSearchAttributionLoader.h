@interface GEOSearchAttributionLoader : NSObject
- (void).cxx_destruct;
- (id)initWithAttributionManifest:;
- (void)loadAttributionInfoForIdentifier:allowNetwork:completionHandler:;
@end
