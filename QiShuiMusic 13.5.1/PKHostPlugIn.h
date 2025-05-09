@interface PKHostPlugIn : PKPlugInCore
@property (nonatomic) PKHost host;
@property (nonatomic) NSXPCConnection pluginConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> _replyQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> _syncQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> _startQueue;
@property (nonatomic) <PKCorePlugInProtocol> service;
@property (nonatomic) <PKCorePlugInProtocol> syncService;
@property (nonatomic) NSUUID supersedingUUID;
@property (nonatomic) <PKPlugIn> supersededBy;
@property (nonatomic) NSUUID multipleInstanceUUID;
@property (nonatomic) NSUUID effectiveUUID;
@property (nonatomic) NSString serviceExtension;
@property (nonatomic) NSDictionary discoveryExtensions;
@property (nonatomic) NSArray sandboxExtensions;
@property (nonatomic) @ queuedHostPrincipal;
@property (nonatomic) Protocol queuedHostProtocol;
@property (nonatomic) Q state;
@property (nonatomic) I useCount;
@property (nonatomic) @ plugInPrincipal;
@property (nonatomic) @ embeddedPrincipal;
@property (nonatomic) NSBundle embeddedBundle;
@property (nonatomic) NSUserDefaults defaults;
@property (nonatomic) BOOL terminating;
@property (nonatomic) NSDate beganUsingAt;
@property (nonatomic) NSDictionary sourceForm;
@property (nonatomic) NSDictionary environment;
@property (nonatomic) NSMutableSet requests;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSDictionary extensionState;
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSArray launchPersonas;
@property (nonatomic) NSString sandboxProfile;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString version;
@property (nonatomic) NSURL url;
@property (nonatomic) NSURL containingUrl;
@property (nonatomic) BOOL onSystemVolume;
@property (nonatomic) NSDictionary bundleInfoDictionary;
@property (nonatomic) NSDictionary plugInDictionary;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedShortName;
@property (nonatomic) NSString localizedContainingName;
@property (nonatomic) NSDictionary localizedFileProviderActionNames;
@property (nonatomic) q userElection;
@property (nonatomic) BOOL spent;
@property (nonatomic) BOOL active;
@property (nonatomic) @? notificationBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sandboxExtensions;
- (BOOL)active;
- (void)setSandboxExtensions:;
- (BOOL)spent;
- (id)embeddedBundle;
- (void)setTerminating:;
- (BOOL)isSandboxed;
- (void)setPlugInPrincipal:;
- (BOOL)useBundle:error:;
- (id)defaults;
- (id)discoveryExtensions;
- (id)embeddedPrincipal;
- (long long)userElection;
- (void)setService:;
- (void)setSyncService:;
- (void)setEmbeddedPrincipal:;
- (id)plugInPrincipal;
- (void)changeState:;
- (id)createInstanceWithUUID:;
- (id)effectiveUUID;
- (void)setQueuedHostPrincipal:;
- (void)setEnvironment:;
- (void)setHostPrincipal:withProtocol:;
- (id)requests;
- (id)sourceForm;
- (id)host;
- (void)setState:;
- (void)setEmbeddedBundle:;
- (id)queuedHostProtocol;
- (id)beganUsingAt;
- (void)beginUsingRequest:completion:;
- (BOOL)beginUsingRequest:error:;
- (void)setHost:;
- (id)multipleInstanceUUID;
- (void)setExtensionState:;
- (void)setMultipleInstanceUUID:;
- (void)setSourceForm:;
- (BOOL)loadExtensions:error:;
- (void)beginUsingRequest:withSubsystemOptions:completion:;
- (void)set_replyQueue:;
- (void)suspend;
- (void)setSupersedingUUID:;
- (void)setUseCount:;
- (BOOL)endUsingRequest:error:;
- (void)set_startQueue:;
- (id)queuedHostPrincipal;
- (id)service;
- (void)set_syncQueue:;
- (id)environment;
- (id)syncService;
- (void)setQueuedHostProtocol:;
- (void)resume;
- (void)unwind:force:;
- (BOOL)beginUsingWithSubsystemOptions:error:;
- (BOOL)beginUsingWithError:;
- (void)beginUsingWithSubsystemOptions:completion:;
- (id)sandboxProfile;
- (void)connection:handleInvocation:isReply:;
- (void)setBeganUsingAt:;
- (id)supersededBy;
- (id)notificationBlock;
- (BOOL)endUsingWithError:;
- (BOOL)beginUsingRequest:withSubsystemOptions:error:;
- (id)serviceExtension;
- (unsigned int)useCount;
- (void)setPreferredLanguages:;
- (void)setUserElection:;
- (void)preparePlugInUsingService:completion:;
- (unsigned long long)state;
- (void)setDiscoveryExtensions:;
- (void)startPlugInRequest:synchronously:subsystemOptions:completion:;
- (void)setReplyQueue:;
- (void)beginUsing:;
- (id)initWithForm:host:;
- (id)preferredLanguages;
- (void)setPluginConnection:;
- (void).cxx_destruct;
- (void)endUsingRequest:completion:;
- (id)supersedingUUID;
- (void)setBootstrapWithSubsystemOptions:;
- (id)description;
- (id)_syncQueue;
- (void)endUsing:;
- (void)updateFromForm:host:;
- (void)setSupersededBy:;
- (void)setSandboxProfile:;
- (void)setServiceExtension:;
- (void)_validatePersona;
- (id)_startQueue;
- (id)_replyQueue;
- (id)pluginConnection;
- (void)setNotificationBlock:;
- (id)extensionState;
- (void)addRequestUUID:;
- (void)messageTraceUsage;
- (BOOL)terminating;
@end
