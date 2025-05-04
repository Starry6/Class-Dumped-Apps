@interface AWEUserDraftCollectionTagContentView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEUserDraftTagTopView tagTopView;
@property (nonatomic) AWEUserDraftTagBottomView tagBottomView;
- (id)tagTopView;
- (id)tagBottomView;
- (void)updateViewsWithNumber:andContent:;
- (void)setTagTopView:;
- (void)setTagBottomView:;
- (void)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
@end
