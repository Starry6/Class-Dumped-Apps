@interface IESLiveSaaSMutuallyExclusiveViewFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSMutuallyExclusiveViewStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)didSetAttachingDIContext;
- (void)observePopupContainerSubviewsChange;
- (void)removeItem:;
- (void)addItem:;
- (void)setStore:;
- (id)initWithStore:;
- (void)removeItemWithIdentifier:;
- (void).cxx_destruct;
- (id)store;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
