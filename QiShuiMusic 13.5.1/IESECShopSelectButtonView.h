@interface IESECShopSelectButtonView : UIView
@property (nonatomic) IESECStoreSelectButtonModel model;
@property (nonatomic) UILabel label;
@property (nonatomic) <IESECShopSelectButtonViewDelegate> delegate;
- (id)model;
- (void)setModel:;
- (id)initWithModel:;
- (void)setDelegate:;
- (void)setLabel:;
- (id)label;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (void)tapAction;
- (void)changeStyle:;
@end
