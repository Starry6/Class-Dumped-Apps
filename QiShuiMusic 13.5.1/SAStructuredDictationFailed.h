@interface SAStructuredDictationFailed : SABaseClientBoundCommand
@property (nonatomic) NSString dialogIdentifier;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString recognition;
@property (nonatomic) NSString userFacingReasonDescription;
@property (nonatomic) NSString userFacingReasonTitle;
- (id)af_dialogIdentifier;
- (id)groupIdentifier;
- (long long)errorCode;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)recognition;
- (void)setDialogIdentifier:;
- (id)dialogIdentifier;
- (void)setRecognition:;
- (id)userFacingReasonDescription;
- (void)setUserFacingReasonDescription:;
- (id)userFacingReasonTitle;
- (void)setUserFacingReasonTitle:;
+ (id)structuredDictationFailed;
+ (id)structuredDictationFailedWithDictionary:context:;
@end
