@interface BDASplashStore : NSObject
@property (nonatomic) NSDictionary allParams;
- (void)registerParams:;
- (id)splashNetworkType;
- (id)splashRequestCommonParams;
- (id)init;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)sdkVersion;
- (id)allParams;
- (void)setAllParams:;
+ (id)sharedInstance;
@end
