@interface BDMannorStyleTemplateComponentRelationModel : MTLModel
@property (nonatomic) BDMannorComponentRelationInfo toShowToHide;
@property (nonatomic) BDMannorComponentRelationInfo toHideToShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setToHideToShow:;
- (void)setToShowToHide:;
- (id)toHideToShow;
- (id)toShowToHide;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
