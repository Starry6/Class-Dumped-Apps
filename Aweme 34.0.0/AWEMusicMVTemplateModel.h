@interface AWEMusicMVTemplateModel : MTLModel
@property (nonatomic) NSArray templatesInfo;
@property (nonatomic) NSArray musicEditsInfo;
@property (nonatomic) AWEMusicMVTemplateRspBase baseInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)baseInfo;
- (void)setBaseInfo:;
- (id)templatesInfo;
- (void)setTemplatesInfo:;
- (id)musicEditsInfo;
- (void)setMusicEditsInfo:;
- (void).cxx_destruct;
+ (id)templatesInfoJSONTransformer;
+ (id)musicEditsInfoJSONTransformer;
+ (id)baseInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
