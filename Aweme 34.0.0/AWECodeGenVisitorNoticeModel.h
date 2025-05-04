@interface AWECodeGenVisitorNoticeModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray visitorModelArray;
@property (nonatomic) NSString labelText;
@property (nonatomic) NSInteger labelType;
@property (nonatomic) NSString hint;
@property (nonatomic) AWECodeGenInteractiveTitleModel hintWithParamsModel;
@property (nonatomic) q mergeCount;
- (long long)mergeCount;
- (id)visitorModelArray;
- (void)setMergeCount:;
- (id)hintWithParamsModel;
- (void)setHintWithParamsModel:;
- (void)setVisitorModelArray:;
- (id)labelText;
- (id)content;
- (int)labelType;
- (void)setLabelType:;
- (void)setContent:;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)hint;
- (void)setHint:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
