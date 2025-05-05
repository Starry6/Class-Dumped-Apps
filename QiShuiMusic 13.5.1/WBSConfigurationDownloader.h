@interface WBSConfigurationDownloader : NSObject
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithFileName:dataTransformer:;
- (void)downloadConfigurationWithCompletionHandler:;
+ (id)new;
@end
