@interface AWEDTONoteImageInstanceModel : MTLModel
@property (nonatomic) NSString templateJson;
@property (nonatomic) NSString templateCategoryId;
@property (nonatomic) NSString templateCategoryName;
@property (nonatomic) BOOL isFromMultiSlotTemplate;
@property (nonatomic) NSArray multiSlotImageInfo;
@property (nonatomic) NSArray imageTemplateAigcResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templateCategoryId;
- (void)setTemplateCategoryId:;
- (id)templateCategoryName;
- (void)setTemplateCategoryName:;
- (BOOL)isFromMultiSlotTemplate;
- (void)setIsFromMultiSlotTemplate:;
- (id)multiSlotImageInfo;
- (void)setMultiSlotImageInfo:;
- (id)imageTemplateAigcResult;
- (void)setImageTemplateAigcResult:;
- (void).cxx_destruct;
- (void)setTemplateJson:;
- (id)templateJson;
+ (id)multiSlotImageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
