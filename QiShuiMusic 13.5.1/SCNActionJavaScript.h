@interface SCNActionJavaScript : SCNAction
- (void)dealloc;
- (id)initWithString:;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:script:;
@end
