@interface AWELivePreStreamAlertElementServiceImp : NSObject
@property (nonatomic) Q maxElementPriority;
@property (nonatomic) <AWELivePreStreamAlertPriorityProtocol> showElement;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) AWELivePreStreamContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithController:context:;
- (void)makeBottomContainer:withOffset:;
- (unsigned long long)maxElementPriority;
- (void)setMaxElementPriority:;
- (id)showElement;
- (void)setShowElement:;
- (void)p_hidePreViewAllElements:config:;
- (void)updateMaxPriority:withCancle:;
- (BOOL)showElement:;
- (BOOL)checkAlertElementIsShowing;
- (void)prepareForReuse;
- (id)viewController;
- (void)setContext:;
- (void).cxx_destruct;
- (BOOL)removeElement:;
- (id)context;
- (void)setViewController:;
@end
