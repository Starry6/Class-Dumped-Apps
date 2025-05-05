@interface IESECRelationTagContainerView : UIView
@property (nonatomic) IESECRelationTagContainerModel model;
- (id)model;
- (id)initWithModel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateWithModel:;
+ (id)p_constructDividerLine:;
+ (id)p_constructImage:;
+ (id)p_constructSubTagView:;
+ (id)p_constructText:;
@end
