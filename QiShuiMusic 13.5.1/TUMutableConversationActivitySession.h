@interface TUMutableConversationActivitySession : TUConversationActivitySession
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSUUID UUID;
@property (nonatomic) TUConversationActivity activity;
@property (nonatomic) Q state;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) BOOL isLocallyInitiated;
@property (nonatomic) BOOL isLightweightPrimaryInitiated;
@property (nonatomic) BOOL isFirstJoin;
@property (nonatomic) BOOL permittedToJoin;
@property (nonatomic) NSSet activeRemoteParticipants;
@property (nonatomic) NSString persistentSceneIdentifier;
@property (nonatomic) Q distributionCount;
@property (nonatomic) TUHandle terminatingHandle;
@property (nonatomic) BOOL usingAirplay;
@property (nonatomic) Q applicationState;
@end
