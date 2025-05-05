@interface WBSUserAgentQuirksManager : NSObject
- (id)init;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (void)getQuirksForDomain:completionHandler:;
- (id)initWithBuiltInQuirkListURL:downloadsDirectoryURL:resourceName:resourceVersion:updateDateDefaultsKey:updateInterval:;
@end
