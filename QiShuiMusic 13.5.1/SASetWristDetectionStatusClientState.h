@interface SASetWristDetectionStatusClientState : SABaseCommand
@property (nonatomic) SAWristDetectionStatusClientState clientState;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)clientState;
- (id)encodedClassName;
- (void)setClientState:;
+ (id)setWristDetectionStatusClientState;
+ (id)setWristDetectionStatusClientStateWithDictionary:context:;
@end
