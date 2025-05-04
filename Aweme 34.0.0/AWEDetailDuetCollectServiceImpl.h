@interface AWEDetailDuetCollectServiceImpl : NSObject
@property (nonatomic) UIViewController host;
@property (nonatomic) AWEDetailDuetViewModel stateContext;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (id)initWithHost:serviceProvider:;
- (void)collectWithActionSender:;
- (void)p_handleToastTipAnimationWithCollectStatus:eventSender:;
- (void)setHost:;
- (id)host;
- (void)setProvider:;
- (void)setStateContext:;
- (void).cxx_destruct;
- (id)stateContext;
- (id)provider;
@end
