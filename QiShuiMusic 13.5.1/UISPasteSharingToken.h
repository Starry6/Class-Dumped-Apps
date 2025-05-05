@interface UISPasteSharingToken : NSObject
@property (nonatomic) Q tokenValue;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTokenValue:;
- (unsigned long long)tokenValue;
+ (BOOL)supportsSecureCoding;
@end
