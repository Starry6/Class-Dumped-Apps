@interface AWECodeGenMoreRelatedInfoModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUrlModel iconModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString jointTag;
@property (nonatomic) NSString schema;
- (id)jointTag;
- (void)setJointTag:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setIconModel:;
- (void)setTitle:;
- (id)iconModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
