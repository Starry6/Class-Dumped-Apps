@interface AWEInteractSurveyOptionModel : MTLModel
@property (nonatomic) NSString optionTitle;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString recoExtra;
@property (nonatomic) BOOL isOptionSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)optionTitle;
- (void)setOptionTitle:;
- (id)recoExtra;
- (void)setRecoExtra:;
- (BOOL)isOptionSelected;
- (void)setIsOptionSelected:;
- (id)extra;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
