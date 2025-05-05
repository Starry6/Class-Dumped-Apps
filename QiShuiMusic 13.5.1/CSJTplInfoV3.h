@interface CSJTplInfoV3 : NSObject
@property (nonatomic) NSString templateDataUrl;
@property (nonatomic) NSString templateDataMd5;
@property (nonatomic) NSString templateDataId;
@property (nonatomic) NSString templateData;
@property (nonatomic) Q material_type;
@property (nonatomic) NSString version;
@property (nonatomic) NSString custom_components;
- (id)templateDataMd5;
- (id)templateDataUrl;
- (id)custom_components;
- (unsigned long long)material_type;
- (void)setCustom_components:;
- (void)setMaterial_type:;
- (void)setTemplateData:;
- (void)setTemplateDataId:;
- (void)setTemplateDataMd5:;
- (void)setTemplateDataUrl:;
- (void)setupDataWithDictionary:;
- (id)templateData;
- (id)templateDataId;
- (void)setVersion:;
- (id)version;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
