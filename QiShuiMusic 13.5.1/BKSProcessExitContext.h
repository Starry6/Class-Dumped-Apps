@interface BKSProcessExitContext : NSObject
@property (nonatomic) Q exitReason;
- (unsigned long long)exitReason;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
