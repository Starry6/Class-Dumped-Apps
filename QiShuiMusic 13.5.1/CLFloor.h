@interface CLFloor : NSObject
@property (nonatomic) q level;
- (id)initWithLevel:;
- (long long)level;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
