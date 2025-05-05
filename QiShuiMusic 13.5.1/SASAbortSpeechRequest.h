@interface SASAbortSpeechRequest : SABaseClientBoundCommand
@property (nonatomic) NSString reason;
- (id)groupIdentifier;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
+ (id)abortSpeechRequest;
+ (id)abortSpeechRequestWithDictionary:context:;
@end
