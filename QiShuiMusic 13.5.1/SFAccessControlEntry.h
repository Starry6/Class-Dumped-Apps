@interface SFAccessControlEntry : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL owner;
@property (nonatomic) BOOL canRead;
@property (nonatomic) BOOL canWrite;
- (void)setOwner:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)canWrite;
- (void).cxx_destruct;
- (BOOL)canRead;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (BOOL)isOwner;
- (id)initWithBundleID:owner:canRead:canWrite:;
- (void)setCanRead:;
- (void)setCanWrite:;
+ (BOOL)supportsSecureCoding;
@end
