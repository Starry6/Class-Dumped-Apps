@interface ASDSystemAppRequest : ASDPersistentRequest
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber storeItemID;
@property (nonatomic) BOOL userInitiated;
- (void)setUserInitiated:;
- (id)storeItemID;
- (void)setStoreItemID:;
- (id)initWithCoder:;
- (BOOL)isUserInitiated;
- (id)initWithBundleID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
+ (BOOL)supportsSecureCoding;
@end
