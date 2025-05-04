@interface AWEMVCardRightBottomLabelResourceView : UIView
@property (nonatomic) UIStackView containerStackView;
@property (nonatomic) UIImageView rightIconView;
@property (nonatomic) AWEFeedInsetsLabel rightLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)configResourceWithAwemeModel:context:;
- (id)rightIconView;
- (void)setRightIconView:;
- (id)imageRightBottomUIConfigModel;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)rightLabel;
- (void)setupViews;
- (id)containerStackView;
- (void)setContainerStackView:;
- (void)setRightLabel:;
@end
