@interface SASessionValidationFailed : SABaseClientBoundCommand
@property (nonatomic) NSString errorCode;
- (id)groupIdentifier;
- (id)errorCode;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setErrorCode:;
+ (id)sessionValidationFailed;
+ (id)sessionValidationFailedWithDictionary:context:;
@end
