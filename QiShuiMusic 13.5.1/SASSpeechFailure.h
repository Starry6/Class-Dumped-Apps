@interface SASSpeechFailure : SABaseClientBoundCommand
@property (nonatomic) q errorCode;
@property (nonatomic) NSInteger reason;
@property (nonatomic) NSString reasonDescription;
- (id)groupIdentifier;
- (long long)errorCode;
- (void)setReasonDescription:;
- (int)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)reasonDescription;
+ (id)speechFailure;
+ (id)speechFailureWithDictionary:context:;
@end
