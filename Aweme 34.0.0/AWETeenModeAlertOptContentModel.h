@interface AWETeenModeAlertOptContentModel : MTLModel
@property (nonatomic) NSString enterText;
@property (nonatomic) NSString exitText;
@property (nonatomic) q buttonType;
@property (nonatomic) NSArray materials;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterText;
- (void)setEnterText:;
- (id)exitText;
- (void)setExitText:;
- (long long)buttonType;
- (id)materials;
- (void).cxx_destruct;
- (void)setMaterials:;
- (void)setButtonType:;
+ (id)materialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
