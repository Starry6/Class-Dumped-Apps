@interface AWEIMCellComponentBase : AWEIMComponentBase
@property (nonatomic) AWEIMCellPresenterBase presenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onCellPrepareReuseForCurrentViewModel;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
@end
