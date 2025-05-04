@interface AWECampaignTaskReportDataModel : MTLModel
@property (nonatomic) NSArray schemaList;
@property (nonatomic) NSArray popSchemaList;
@property (nonatomic) NSArray instanceList;
@property (nonatomic) NSString message;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)instanceList;
- (void)setInstanceList:;
- (id)schemaList;
- (void)setSchemaList:;
- (id)popSchemaList;
- (void)setPopSchemaList:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)instanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
