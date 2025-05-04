@interface AWESearchTemplateBundleTaskConfig : NSObject
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSString bundle;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString resourceURL;
@property (nonatomic) AWESearchTemplateBundleInfo bundleInfo;
@property (nonatomic) BOOL isGlobalCache;
@property (nonatomic) LynxTemplateBundle templateBundle;
- (id)templateBundle;
- (void)setTemplateBundle:;
- (void)setBundleInfo:;
- (BOOL)isGlobalCache;
- (void)setIsGlobalCache:;
- (id)cacheKey;
- (id)resourceURL;
- (id)channel;
- (id)bundle;
- (id)bundleInfo;
- (void)setChannel:;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (void)setResourceURL:;
- (void)setBundle:;
@end
