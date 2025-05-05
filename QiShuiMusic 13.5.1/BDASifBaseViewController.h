@interface BDASifBaseViewController : BDXViewController
@property (nonatomic) BDASifConfiguration sifConfig;
@property (nonatomic) BDASifContainerLifecycleDelegate sifLifeDelegate;
- (id)sifLifeDelegate;
- (void)setSifConfig:;
- (void)setSifLifeDelegate:;
- (id)sifConfig;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
