@interface WBSAutoplayQuirkWhitelistManager : NSObject
- (id)init;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (id)initWithBuiltInWhitelistURL:downloadsDirectoryURL:resourceName:resourceVersion:updateDateDefaultsKey:updateInterval:;
- (void)quirksForDomain:completionHandler:;
@end
