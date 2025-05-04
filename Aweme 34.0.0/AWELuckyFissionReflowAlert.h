@interface AWELuckyFissionReflowAlert : NSObject
@property (nonatomic) NSString popupUrl;
@property (nonatomic) UIViewController<BDXContainerProtocol> popupVC;
@property (nonatomic) @? closeCallback;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerWillDestory:;
- (void)containerOnShow:sourceParam:;
- (void)containerDidClose:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (void)showWithCloseCallback:;
- (id)popupUrl;
- (void)setCloseCallback:;
- (id)closeCallback;
- (void)setPopupVC:;
- (id)popupVC;
- (void)setPopupUrl:;
- (void).cxx_destruct;
- (void)prepareWithCompletion:;
- (BOOL)hasShown;
- (void)setHasShown:;
- (id)initWithUrl:;
@end
