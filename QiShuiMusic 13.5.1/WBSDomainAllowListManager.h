@interface WBSDomainAllowListManager : NSObject
- (id)init;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (id)initWithBuiltInAllowListURL:downloadsDirectoryURL:resourceName:resourceVersion:updateDateDefaultsKey:updateInterval:;
- (void)isDomainAllowed:completionHandler:;
@end
