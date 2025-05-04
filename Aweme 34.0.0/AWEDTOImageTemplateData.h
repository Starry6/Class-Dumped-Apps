@interface AWEDTOImageTemplateData : MTLModel
@property (nonatomic) NSString uniqueId;
@property (nonatomic) NSString originImgPath;
@property (nonatomic) NSString editDataPath;
@property (nonatomic) NSString imageTemplateId;
@property (nonatomic) NSString mediaId;
@property (nonatomic) NSDictionary imageTemplateExtraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originImgPath;
- (void)setOriginImgPath:;
- (id)editDataPath;
- (void)setEditDataPath:;
- (id)imageTemplateId;
- (void)setImageTemplateId:;
- (id)imageTemplateExtraInfo;
- (void)setImageTemplateExtraInfo:;
- (void)setUniqueId:;
- (id)uniqueId;
- (void).cxx_destruct;
- (id)mediaId;
- (void)setMediaId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
