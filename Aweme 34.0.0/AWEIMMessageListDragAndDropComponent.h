@interface AWEIMMessageListDragAndDropComponent : AWEIMComponentBase
@property (nonatomic) UIDropInteraction dropInteraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (BOOL)dropInteraction:canHandleSession:;
- (void)setDropInteraction:;
- (id)dropInteraction:sessionDidUpdate:;
- (id)dropInteraction;
- (void)dropInteraction:performDrop:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
