@interface AWEIMSkylightCellTitlePresenter : AWEIMSkylightBasePresenter
@property (nonatomic) NSString titleStr;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double cornerRadius;
- (void)updateView:;
- (id)titleStr;
- (void)setTitleStr:;
- (unsigned long long)componentViewPosition;
- (void)setCornerRadius:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)createView;
@end
