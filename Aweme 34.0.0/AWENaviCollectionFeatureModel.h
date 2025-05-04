@interface AWENaviCollectionFeatureModel : TTKNaviFeatureModel
@property (nonatomic) TTKNaviCategoryModel category;
@property (nonatomic) IESEffectModel effect;
@property (nonatomic) TTKNaviInspirationModel inspiration;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inspiration;
- (void)setInspiration:;
- (void)setIsSelected:;
- (id)category;
- (id)effect;
- (BOOL)isSelected;
- (void)setCategory:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setEffect:;
@end
