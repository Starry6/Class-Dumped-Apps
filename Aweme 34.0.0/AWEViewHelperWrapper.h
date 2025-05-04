@interface AWEViewHelperWrapper : NSObject
@property (nonatomic) <AFDModalViewHelperProtocol> helper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupTransitionController:contentHeight:cornerRadius:disablePanGes:;
- (void)updateContentHeight:viewController:;
- (void)setupTransitionController:contentHeight:cornerRadius:;
- (id)init;
- (void)setHelper:;
- (void).cxx_destruct;
- (id)helper;
@end
