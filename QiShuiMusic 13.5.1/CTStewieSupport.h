@interface CTStewieSupport : NSObject
@property (nonatomic) BOOL status;
@property (nonatomic) BOOL hwSupport;
- (void)setStatus:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToSupport:;
- (BOOL)hwSupport;
- (void)setHwSupport:;
+ (BOOL)supportsSecureCoding;
@end
