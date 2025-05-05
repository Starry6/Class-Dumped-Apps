@interface ICLRegistrationOptions : NSObject
@property (nonatomic) I targetUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTargetUID:;
- (unsigned int)targetUID;
- (void)setTargetUID:;
+ (BOOL)supportsSecureCoding;
@end
