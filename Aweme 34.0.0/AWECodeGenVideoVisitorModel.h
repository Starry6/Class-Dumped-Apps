@interface AWECodeGenVideoVisitorModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUserModel userModel;
@property (nonatomic) NSInteger sourceType;
@property (nonatomic) NSString sourceLabel;
- (void)setSourceLabel:;
- (void)setSourceType:;
- (int)sourceType;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)sourceLabel;
+ (id)JSONKeyPathsByPropertyKey;
@end
