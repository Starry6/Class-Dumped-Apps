@interface IMDaemonListener : NSObject
@property (nonatomic) BOOL setupComplete;
@property (nonatomic) BOOL hasPostedSetupComplete;
@property (nonatomic) NSArray allServices;
@property (nonatomic) NSMutableDictionary _contexts;
@property (nonatomic) BOOL _hidingDisconnect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary properties;
@property (nonatomic) NSDictionary persistentProperties;
@property (nonatomic) Q myStatus;
@property (nonatomic) NSString myStatusMessage;
@property (nonatomic) I myIdleTime;
@property (nonatomic) Q vcCapabilities;
@property (nonatomic) BOOL shouldHoldChatMessages;
@property (nonatomic) BOOL holdingChatMessages;
- (id)valueOfPersistentProperty:;
- (BOOL)isSetupComplete;
- (unsigned int)myIdleTime;
- (id)_contexts;
- (id)myStatusMessage;
- (id)serviceWithName:;
- (void)addHandler:;
- (id)persistentProperties;
- (void)_resetPostedSetupCompleted;
- (BOOL)isHoldingChatMessages;
- (id)allServices;
- (id)_stampForContext:;
- (unsigned long long)vcCapabilities;
- (unsigned long long)myStatus;
- (void)_setHidingDisconnect:;
- (void)holdChatMessages;
- (id)properties;
- (BOOL)shouldHoldChatMessages;
- (BOOL)_hidingDisconnect;
- (BOOL)hasPostedSetupComplete;
- (void)removeHandler:;
- (void)releaseHeldChatMessages;
- (void)_setStamp:forContext:;
- (id)valueOfProperty:;
@end
