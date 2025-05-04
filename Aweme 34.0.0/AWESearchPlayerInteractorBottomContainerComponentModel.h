@interface AWESearchPlayerInteractorBottomContainerComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSArray type;
@property (nonatomic) Q componentType;
@property (nonatomic) AWESearchBottomNormalBarComponentModel normalBarModel;
@property (nonatomic) AWESearchHotTipComponentModel hotTipModel;
- (void)setHotTipModel:;
- (void)setNormalBarModel:;
- (id)normalBarModel;
- (id)hotTipModel;
- (unsigned long long)componentType;
- (id)type;
- (void)setType:;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
