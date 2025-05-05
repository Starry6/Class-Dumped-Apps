@interface IESLivePKRecommendFilterCell : UIView
@property (nonatomic) IESLivePKRecommendFilterItem itemModel;
@property (nonatomic) @? tapActionBlock;
- (id)itemModel;
- (void)setItemModel:;
- (void)setTapActionBlock:;
- (id)tapActionBlock;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setupView;
- (void)tapAction;
@end
