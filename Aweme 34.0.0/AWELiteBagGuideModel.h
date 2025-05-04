@interface AWELiteBagGuideModel : AWELiteBaseApiModel
@property (nonatomic) AWELiteBagGuideBackgroundModel backgroundModel;
@property (nonatomic) AWELiteBagGuideGuideInfoModel guideInfoModel;
@property (nonatomic) AWELiteBagGuideCommendInfoModel commendInfoModel;
@property (nonatomic) AWELiteBagGuideShowTimeConfigModel showTimeConfigModel;
@property (nonatomic) AWELiteBagGuideJumpModel jumpModel;
@property (nonatomic) AWELiteBagGuideTimeModel bagGuideTimeModel;
@property (nonatomic) NSNumber guideStyle;
@property (nonatomic) AWELuckyCatPendant pendant;
- (id)pendant;
- (void)setPendant:;
- (void)setBackgroundModel:;
- (id)guideStyle;
- (void)setJumpModel:;
- (id)jumpModel;
- (id)guideInfoModel;
- (void)setGuideInfoModel:;
- (id)commendInfoModel;
- (void)setCommendInfoModel:;
- (id)showTimeConfigModel;
- (void)setShowTimeConfigModel:;
- (id)bagGuideTimeModel;
- (void)setBagGuideTimeModel:;
- (void)setGuideStyle:;
- (void).cxx_destruct;
- (id)backgroundModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
