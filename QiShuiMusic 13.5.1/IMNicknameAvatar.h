@interface IMNicknameAvatar : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
