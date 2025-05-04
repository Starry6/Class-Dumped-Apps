@interface AWECodeGenRemindStyleModel : AWEBaseDataModel
@property (nonatomic) NSString textColor;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) AWECodeGenUrlModel iconModel;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)setIconModel:;
- (id)textColor;
- (id)iconModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
