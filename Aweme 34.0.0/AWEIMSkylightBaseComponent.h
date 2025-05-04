@interface AWEIMSkylightBaseComponent : AWEIMComponentBase
@property (nonatomic) AWEIMSkylightBasePresenter presenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)reloadCell;
- (void)onPresenter:willUpdateView:;
- (void)reloadPresenter;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
