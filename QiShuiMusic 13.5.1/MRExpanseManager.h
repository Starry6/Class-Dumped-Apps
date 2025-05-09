@interface MRExpanseManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSObject<OS_dispatch_queue> notifyQueue;
@property (nonatomic) NSHashTable observers;
@property (nonatomic) TUConversationManager conversationManager;
@property (nonatomic) TUNeighborhoodActivityConduit conduit;
@property (nonatomic) AVAudioSession auxiliaryPlaybackAudioSession;
@property (nonatomic) BOOL expanseSessionActive;
@property (nonatomic) BOOL expanseSessionHasActiveActivity;
@property (nonatomic) BOOL expanseSessionHasRemoteActivity;
@property (nonatomic) BOOL expanseSessionHasScreenSharingActivity;
@property (nonatomic) BOOL expanseHandoffSupported;
@property (nonatomic) NSString activeTelevisionRouteID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)notifyQueue;
- (void)removeObserver:;
- (void)_notifyObserversThatTelevisionJoinedSession;
- (void)addObserver:;
- (void)neighborhoodActivityConduit:tvDeviceDisappeared:;
- (void)dealloc;
- (void)setAuxiliaryPlaybackAudioSession:;
- (BOOL)deviceIsActiveTelevision:;
- (BOOL)expanseHandoffSupported;
- (BOOL)errorIsTelevisionCapabilitiesError:;
- (void)_handleExpanseSessionLeft;
- (BOOL)expanseSessionHasActiveActivity;
- (void)neighborhoodActivityConduit:splitSessionStarted:;
- (void)_notifyObserversThatExpanseSessionLeft;
- (void)_notifyObserversThatExpanseSessionJoined;
- (void)conversationManager:stateChangedForConversation:;
- (BOOL)expanseSessionActive;
- (id)activeConversation;
- (void).cxx_destruct;
- (void)removeTelevisionWithRouteIdentifierFromSession:completion:;
- (void)addTelevisionWithRouteIdentifierToSession:completion:;
- (void)_handleExpanseSessionJoined;
- (id)conduit;
- (void)serverDisconnectedForConversationManager:;
- (void)_handleConversationStateChanged;
- (BOOL)expanseSessionHasScreenSharingActivity;
- (id)initWithQueue:;
- (id)observers;
- (id)activeTelevisionRouteID;
- (id)auxiliaryPlaybackAudioSession;
- (void)neighborhoodActivityConduit:splitSessionEnded:;
- (id)conversationManager;
- (BOOL)expanseSessionHasRemoteActivity;
- (id)queue;
- (BOOL)activeActivityExistsForBundle:;
- (void)neighborhoodActivityConduit:tvDeviceAppeared:;
- (void)_notifyObserversThatTelevisionLeftSession;
+ (id)sharedManager;
@end
