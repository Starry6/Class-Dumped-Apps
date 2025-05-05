@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand
@property (nonatomic) SASRecognition rawRecognition;
@property (nonatomic) NSString sessionId;
- (void)setSessionId:;
- (id)sessionId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)rawRecognition;
- (void)setRawRecognition:;
+ (id)clientBoundConfusionNetwork;
+ (id)clientBoundConfusionNetworkWithDictionary:context:;
@end
