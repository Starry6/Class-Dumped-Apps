@interface CTPerAppDataUsage : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSArray used;
- (id)used;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)init:withPeriods:;
+ (BOOL)supportsSecureCoding;
@end
