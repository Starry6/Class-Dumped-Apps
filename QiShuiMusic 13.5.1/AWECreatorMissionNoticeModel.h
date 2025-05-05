@interface AWECreatorMissionNoticeModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) q subType;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString taskName;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;
- (double)contentH;
- (double)contentW;
- (id)schemaURL;
- (void)setContentH:;
- (void)setContentW:;
- (void)setSchemaURL:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)taskName;
- (void)setTaskID:;
- (id)title;
- (void)setTaskName:;
- (void).cxx_destruct;
- (long long)subType;
- (void)setSubType:;
- (id)taskID;
+ (id)subTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
