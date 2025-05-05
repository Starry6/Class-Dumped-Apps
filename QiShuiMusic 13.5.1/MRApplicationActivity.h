@interface MRApplicationActivity : NSObject
@property (nonatomic) NSUUID uniqueIdentifier;
@property (nonatomic) NSString primaryApplicationDisplayID;
@property (nonatomic) NSString secondaryApplicationDisplayID;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger creatorProcessID;
- (id)uniqueIdentifier;
- (id)initWithPrimaryAppDisplayID:secondaryAppDisplayID:;
- (int)creatorProcessID;
- (id)initWithCoder:;
- (id)secondaryApplicationDisplayID;
- (id)primaryApplicationDisplayID;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (int)status;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
