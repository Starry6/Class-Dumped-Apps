@interface ASDSystemAppMetadata : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) q metadataType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserInitiated:;
- (id)initWithCoder:;
- (BOOL)isUserInitiated;
- (id)initWithBundleID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (long long)metadataType;
+ (BOOL)supportsSecureCoding;
@end
