@interface SASServerBoundConfusionNetwork : SABaseCommand
@property (nonatomic) SASRecognition rawRecognition;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)rawRecognition;
- (void)setRawRecognition:;
+ (id)serverBoundConfusionNetwork;
+ (id)serverBoundConfusionNetworkWithDictionary:context:;
@end
