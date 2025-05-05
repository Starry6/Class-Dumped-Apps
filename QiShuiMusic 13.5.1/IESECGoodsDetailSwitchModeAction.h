@interface IESECGoodsDetailSwitchModeAction : NSObject
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) <IESECGoodsDetailLiveFloatOnTop> liveFloatOnTop;
@property (nonatomic) NSObject<IESECGoodsDetailHostInjectable><IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)additionActionAfterSwitchTo:;
- (void)containerDidAppearAgain;
- (void)containerDidCancelSwitchTo:;
- (void)containerDidSwitchTo:;
- (void)containerWillSwitchTo:;
- (void)handleLiveFloatOnTopIfNeeded;
- (void)initializeWithParameters:;
- (id)liveFloatOnTop;
- (void)setLiveFloatOnTop:;
- (void)setContainer:;
- (id)container;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
@end
