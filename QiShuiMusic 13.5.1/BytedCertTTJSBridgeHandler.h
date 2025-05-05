@interface BytedCertTTJSBridgeHandler : NSObject
@property (nonatomic) NSDictionary baseParams;
@property (nonatomic) UIViewController fromViewController;
- (id)baseParams;
- (void)setBaseParams:;
- (void)setFromViewController:;
- (void)startWithSuperViewController:;
- (id)fromViewController;
- (void)start;
- (id)initWithParams:;
- (void).cxx_destruct;
@end
