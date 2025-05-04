@interface AWESearchPlayerInteractorLeftBottomContainerComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSArray type;
@property (nonatomic) Q componentType;
@property (nonatomic) AWESearchLikeComponentModel likeComponentModel;
@property (nonatomic) AWESearchUserAvatarComponentModel userAvatarComponentModel;
@property (nonatomic) AWESearchBottomNormalBarComponentModel normalBarModel;
@property (nonatomic) AWESearchTextComponentModel textModel;
@property (nonatomic) AWESearchTextExtractionComponentModel textExtractionModel;
- (id)textModel;
- (void)setTextModel:;
- (void)setUserAvatarComponentModel:;
- (void)setTextExtractionModel:;
- (void)setNormalBarModel:;
- (id)normalBarModel;
- (id)likeComponentModel;
- (id)userAvatarComponentModel;
- (id)textExtractionModel;
- (void)setLikeComponentModel:;
- (unsigned long long)componentType;
- (id)type;
- (void)setType:;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
