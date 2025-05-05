@interface LNSystemContext : NSObject
@property (nonatomic) NSDate preciseTimestamp;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)preciseTimestamp;
- (void)setPreciseTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
