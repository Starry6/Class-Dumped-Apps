@interface AWEIMTaskDetailistSectionFooterView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIView topLineView;
@property (nonatomic) UIButton button;
@property (nonatomic) <AWEIMTaskDetailistSectionHeaderFooterViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)onFooterButtonClick;
- (id)delegate;
- (id)initWithFrame:;
- (void)setButton:;
- (id)contentView;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setDelegate:;
- (id)button;
- (void)setTopLineView:;
- (id)topLineView;
@end
