@interface CSJRewardAgainDialogConfigModel : CSJBasicModel
@property (nonatomic) Q dialogType;
@property (nonatomic) NSString templateMd5;
@property (nonatomic) NSString templateURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTemplateMd5:;
- (id)templateMd5;
- (BOOL)valid;
- (id)templateURL;
- (void).cxx_destruct;
- (void)setTemplateURL:;
- (unsigned long long)dialogType;
- (void)setDialogType:;
+ (id)modelCustomPropertyMapper;
@end
