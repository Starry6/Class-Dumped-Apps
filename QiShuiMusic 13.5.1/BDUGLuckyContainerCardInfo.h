@interface BDUGLuckyContainerCardInfo : NSObject
@property (nonatomic) UIViewController<BDXPageContainerProtocol> cardVC;
@property (nonatomic) UIViewController<BDXPageContainerProtocol> cardVCStrong;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @? shownHandler;
@property (nonatomic) BOOL shown;
- (id)cardVC;
- (id)cardVCStrong;
- (id)initWithCardVC:params:shownHandler:;
- (void)setCardVC:;
- (void)setCardVCStrong:;
- (void)setShownHandler:;
- (id)shownHandler;
- (id)init;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (BOOL)shown;
- (void)setShown:;
@end
