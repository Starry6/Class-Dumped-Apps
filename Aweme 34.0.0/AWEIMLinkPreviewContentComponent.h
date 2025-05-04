@interface AWEIMLinkPreviewContentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMLinkPreviewDataController dataController;
@property (nonatomic) BDUGFlowAuthToken lastAuthToken;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (void)addForwardMsgResourceFromComponent;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)currentDataController;
- (void)coverTapped;
- (id)urlDataController;
- (void)updateAuthToken;
- (void)p_trackTapEvent:;
- (id)p_receiverUid;
- (id)lastAuthToken;
- (void)setLastAuthToken:;
- (id)displayMessage;
- (void)setScene:;
- (void)dealloc;
- (long long)scene;
- (void).cxx_destruct;
- (id)dataController;
+ (BOOL)canCreateComponentWithContext:;
@end
