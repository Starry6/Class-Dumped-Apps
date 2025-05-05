@interface WBSPhishingURLClassifierConfigurationOverrideAdapter : NSObject
@property (nonatomic) WBSPhishingConfiguration configuration;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (void)classifyURL:options:completionHandler:;
@end
