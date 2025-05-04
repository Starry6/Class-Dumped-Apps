@interface AWEIMSkylightBasePresenter : NSObject
@property (nonatomic) <AWEIMSkylightBaseComponentProtocol> currentComponent;
@property (nonatomic) UIView view;
@property (nonatomic) {CGSize=dd} componentViewSize;
@property (nonatomic) {CGPoint=dd} componentViewOrigin;
@property (nonatomic) BOOL belongAvatarContainer;
@property (nonatomic) BOOL displayEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)displayEnable;
- (void)setDisplayEnable:;
- (void)updateView:;
- (void)setCurrentComponent:;
- (unsigned long long)componentViewPosition;
- (id)componentViewSize;
- (void)setComponentViewSize:;
- (id)componentViewOrigin;
- (void)setComponentViewOrigin:;
- (BOOL)belongAvatarContainer;
- (void)setBelongAvatarContainer:;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
- (id)createView;
- (id)currentComponent;
@end
