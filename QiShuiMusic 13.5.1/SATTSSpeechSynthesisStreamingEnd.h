@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming
@property (nonatomic) q count;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMessage;
- (void)setCount:;
- (id)groupIdentifier;
- (long long)errorCode;
- (BOOL)requiresResponse;
- (id)errorMessage;
- (id)encodedClassName;
- (void)setErrorCode:;
- (long long)count;
- (void)setErrorMessage:;
+ (id)speechSynthesisStreamingEnd;
+ (id)speechSynthesisStreamingEndWithDictionary:context:;
@end
