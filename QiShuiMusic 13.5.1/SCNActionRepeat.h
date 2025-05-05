@interface SCNActionRepeat : SCNAction
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)repeatAction:count:;
+ (id)repeatActionForever:;
@end
