@interface AWEPOIDetailFeedUgcInfoTagView : UIView
@property (nonatomic) <AWEPOIUgcUIModuleHostProtocol> delegate;
@property (nonatomic) AWEPOIFeedUgcInfoTagContentModel model;
@property (nonatomic) NSDictionary clickRouterParams;
@property (nonatomic) UIImageView tagIcon;
@property (nonatomic) AWEPOIUgcInfoInsetsLabel tagLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)tagIcon;
- (void)setTagIcon:;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)didClickTag;
- (void)setClickRouterParams:;
- (id)clickRouterParams;
- (void)setModel:;
- (id)delegate;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)updateWithModel:;
+ (id)tagSizeWithModel:;
@end
