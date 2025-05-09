@interface AWETeenLynxContainer : UIView
@property (nonatomic) BDXLynxKitParams params;
@property (nonatomic) UIView<BDXLynxViewProtocol> lynxView;
@property (nonatomic) NSString surl;
@property (nonatomic) UILabel resourceLabel;
@property (nonatomic) <BDXKitViewLifecycleProtocol> lynxViewLifecycleDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_themeDidChange:;
- (id)lynxView;
- (void)updateGlobalPropsWithDictionary:;
- (void)setLynxView:;
- (void)view:didFetchedResource:error:;
- (id)surl;
- (void)setSurl:;
- (id)generateGlobalProps;
- (void)loadWithData:;
- (id)initWithSurl:;
- (void)setLynxViewLifecycleDelegate:;
- (void)loadWithData:needReload:;
- (id)generateLynxParams;
- (void)setResourceLabel:;
- (id)resourceLabel;
- (id)lynxViewLifecycleDelegate;
- (id)forwardingTargetForSelector:;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (void)monitorSuccess;
+ (void)monitorFailWithError:nativeBackup:;
@end
