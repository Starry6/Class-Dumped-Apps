@interface AWEOpenPlatformIMShareModel : NSObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString thirdAppName;
@property (nonatomic) NSString thirdAppKey;
@property (nonatomic) NSString thirdIconImageURL;
@property (nonatomic) NSString localShareID;
- (id)thirdAppName;
- (void)setThirdAppName:;
- (id)thirdAppKey;
- (void)setThirdAppKey:;
- (id)thirdIconImageURL;
- (void)setThirdIconImageURL:;
- (id)localShareID;
- (void)setLocalShareID:;
- (id)bundleId;
- (void)setBundleId:;
- (void).cxx_destruct;
@end
