@interface AWECodeGenImageInsCreationInfoModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString button;
@property (nonatomic) NSString schema;
@property (nonatomic) NSInteger type;
@property (nonatomic) AWECodeGenUrlModel iconModel;
@property (nonatomic) NSString logInfo;
@property (nonatomic) AWECodeGenUrlModel darkIconModel;
- (id)darkIconModel;
- (id)logInfo;
- (void)setLogInfo:;
- (void)setDarkIconModel:;
- (id)schema;
- (void)setSchema:;
- (void)setButton:;
- (void)setSubTitle:;
- (id)subTitle;
- (int)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setIconModel:;
- (void)setTitle:;
- (id)button;
- (id)iconModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
