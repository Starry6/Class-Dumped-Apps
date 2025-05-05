@interface CTStewieExitContext : NSObject
@property (nonatomic) q reason;
- (long long)reason;
- (id)initWithCoder:;
- (void)setReason:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
