@interface AWESearchPlayerInteractorRightBottomContainerComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSArray type;
@property (nonatomic) Q componentType;
@property (nonatomic) AWESearchPlayStatusBarComponentModel playStatusModel;
- (id)playStatusModel;
- (void)setPlayStatusModel:;
- (unsigned long long)componentType;
- (id)type;
- (void)setType:;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
