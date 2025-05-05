@interface AMSClipMediaURLBuilder : NSObject
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber externalVersionID;
- (id)build;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)bundleID;
- (void)setBundleID:;
- (id)externalVersionID;
- (void)setExternalVersionID:;
- (id)initWithBundleID:bag:;
- (id)_devicePlatform;
- (id)_hostPromise;
- (id)_pathPromise;
- (id)_queryPromise;
@end
