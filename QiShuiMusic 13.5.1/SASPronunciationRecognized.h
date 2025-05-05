@interface SASPronunciationRecognized : SABaseClientBoundCommand
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString interactionId;
@property (nonatomic) SASPronunciationData pronunciationData;
- (id)groupIdentifier;
- (id)errorCode;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)interactionId;
- (void)setInteractionId:;
- (id)pronunciationData;
- (void)setPronunciationData:;
+ (id)pronunciationRecognized;
+ (id)pronunciationRecognizedWithDictionary:context:;
@end
