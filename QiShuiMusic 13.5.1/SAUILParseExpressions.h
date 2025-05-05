@interface SAUILParseExpressions : SABaseClientBoundCommand
@property (nonatomic) NSArray expressions;
@property (nonatomic) SARemoteDevice targetDevice;
- (id)targetDevice;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setTargetDevice:;
- (id)expressions;
- (void)setExpressions:;
+ (id)parseExpressions;
+ (id)parseExpressionsWithDictionary:context:;
@end
