@interface AWECodeGenEntertainmentItemLabelModel : AWEBaseDataModel
@property (nonatomic) NSString text;
@property (nonatomic) q type;
@property (nonatomic) NSString backgroudColor;
@property (nonatomic) NSString textColor;
@property (nonatomic) q position;
@property (nonatomic) AWECodeGenEntertainmentRightLabelModel rightLabelModel;
- (void)setBackgroudColor:;
- (id)backgroudColor;
- (id)rightLabelModel;
- (void)setRightLabelModel:;
- (void)setText:;
- (long long)position;
- (id)text;
- (void)setTextColor:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
