@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand
@property (nonatomic) q errorCode;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString reasonDescription;
- (id)groupIdentifier;
- (long long)errorCode;
- (void)setReasonDescription:;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)reasonDescription;
+ (id)speechSynthesisFailure;
+ (id)speechSynthesisFailureWithDictionary:context:;
@end
