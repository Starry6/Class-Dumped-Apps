@interface IESLiveSaaSCloseGuideCoordinatorFragment : IESLiveRoomComponent
@property (nonatomic) NSPointerArray highPriorityProviders;
@property (nonatomic) NSPointerArray normalPriorityProviders;
@property (nonatomic) NSPointerArray lowPriorityProviders;
@property (nonatomic) NSArray providersPriorityQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)p_triggerCloseGuideNotOnlyOnce:;
- (BOOL)p_triggerCloseGuideOfProviders:;
- (BOOL)couldUnmountComponent;
- (void)didSetAttachingDIContext;
- (id)highPriorityProviders;
- (id)lowPriorityProviders;
- (id)normalPriorityProviders;
- (BOOL)p_containCloseGuideProvider:;
- (BOOL)p_existCloseGuideProviders;
- (id)providersPriorityQueue;
- (void)registerCloseGuideProvider:;
- (void)setHighPriorityProviders:;
- (void)setLowPriorityProviders:;
- (void)setNormalPriorityProviders:;
- (void)setProvidersPriorityQueue:;
- (id)init;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
