@interface IESECLynxCardPreloaderTask : NSObject
@property (nonatomic) @? completeBlock;
@property (nonatomic) IESECLynxCardPreloaderModel model;
@property (nonatomic) HybridLynxView lynxView;
@property (nonatomic) LynxExtraTiming extraTiming;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q state;
- (void)registerBridges;
- (void)setExtraTiming:;
- (id)completeBlock;
- (id)extraTiming;
- (id)lynxView;
- (void)lynxView:onSetup:;
- (id)parseUrlFromSchema:;
- (void)setCompleteBlock:;
- (void)setLynxView:;
- (void)startWithCompleteBlock:;
- (void)view:didFinishLoadWithURL:;
- (void)view:didLoadFailedWithURL:error:;
- (void)viewDidFirstScreen:;
- (id)model;
- (void)setModel:;
- (void)setState:;
- (unsigned long long)state;
- (void).cxx_destruct;
@end
