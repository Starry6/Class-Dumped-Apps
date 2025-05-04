@interface AWEProfileExtensionAreaStyleDefaultCardView : AWEProfileExtensionAreaBaseCardView
@property (nonatomic) UIImageView addView;
@property (nonatomic) UIImageView deleteView;
- (id)addView;
- (void)setAddView:;
- (id)deleteView;
- (void)setDeleteView:;
- (void)refreshWithEditActionType:;
- (id)initWithFrame:;
- (double)iconWidth;
- (void).cxx_destruct;
- (void)setupSubviews;
- (unsigned long long)cardStyle;
@end
