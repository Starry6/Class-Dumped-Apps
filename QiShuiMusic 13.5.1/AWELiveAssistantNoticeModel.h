@interface AWELiveAssistantNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSNumber subType;
@property (nonatomic) NSNumber task_id;
@property (nonatomic) IESIMURLModel imageURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (id)task_id;
- (double)contentH;
- (double)contentW;
- (id)schemaURL;
- (void)setContentH:;
- (void)setContentW:;
- (void)setSchemaURL:;
- (void)setTask_id:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)subType;
- (void)setSubType:;
- (id)webURL;
- (void)setImageURL:;
- (id)imageURL;
- (void)setWebURL:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
