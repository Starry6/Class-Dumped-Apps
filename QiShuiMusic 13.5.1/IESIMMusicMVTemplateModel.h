@interface IESIMMusicMVTemplateModel : MTLModel
@property (nonatomic) NSArray templatesInfo;
@property (nonatomic) NSArray musicEditsInfo;
@property (nonatomic) IESIMMusicMVTemplateRspBase baseInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)baseInfo;
- (id)musicEditsInfo;
- (void)setBaseInfo:;
- (void)setMusicEditsInfo:;
- (void)setTemplatesInfo:;
- (id)templatesInfo;
- (void).cxx_destruct;
+ (id)baseInfoJSONTransformer;
+ (id)musicEditsInfoJSONTransformer;
+ (id)templatesInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
