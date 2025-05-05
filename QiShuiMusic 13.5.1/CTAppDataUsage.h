@interface CTAppDataUsage : NSObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString displayName;
@property (nonatomic) CTDataUsed used;
- (id)used;
- (id)usage;
- (id)bundleId;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)init:withDisplayName:andUsage:;
+ (BOOL)supportsSecureCoding;
@end
