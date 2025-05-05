@interface IESIMOpenPlatformIMShareModel : NSObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString thirdAppName;
@property (nonatomic) NSString thirdAppKey;
@property (nonatomic) NSString thirdIconImageURL;
- (void)setThirdAppKey:;
- (void)setThirdAppName:;
- (void)setThirdIconImageURL:;
- (id)thirdAppKey;
- (id)thirdAppName;
- (id)thirdIconImageURL;
- (id)bundleId;
- (void).cxx_destruct;
- (void)setBundleId:;
@end
