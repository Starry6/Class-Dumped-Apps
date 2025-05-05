@interface SAUIListenForPronunciationCompleted : SABaseCommand
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString interactionId;
@property (nonatomic) SASPronunciationData pronunciationData;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)errorCode;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)interactionId;
- (void)setInteractionId:;
- (id)pronunciationData;
- (void)setPronunciationData:;
+ (id)listenForPronunciationCompleted;
+ (id)listenForPronunciationCompletedWithDictionary:context:;
@end
