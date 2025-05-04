@interface AWEPOIParamsStorageManager : NSObject
@property (nonatomic) NSString paramsVerifyBundleVersion;
@property (nonatomic) double paramsVerifyBundleUpdateTimestamp;
- (id)paramsVerifyBundleVersion;
- (void)setParamsVerifyBundleUpdateTimestamp:;
- (void)setParamsVerifyBundleVersion:;
- (double)paramsVerifyBundleUpdateTimestamp;
- (id)store;
+ (id)sharedStorage;
@end
