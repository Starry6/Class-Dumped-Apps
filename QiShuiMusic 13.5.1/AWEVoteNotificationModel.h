@interface AWEVoteNotificationModel : IESIMBaseApiModel
@property (nonatomic) NSArray fromUser;
@property (nonatomic) IESIMURLModel imageUrl;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSNumber mergeCount;
@property (nonatomic) NSString optionText;
@property (nonatomic) q refType;
@property (nonatomic) IESIMRelationDynamicLable relationLabel;
- (long long)refType;
- (id)mergeCount;
- (id)optionText;
- (id)relationLabel;
- (id)schemaUrl;
- (void)setFromUser:;
- (void)setMergeCount:;
- (void)setOptionText:;
- (void)setRefType:;
- (void)setRelationLabel:;
- (void)setSchemaUrl:;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)fromUser;
+ (id)fromUserJSONTransformer;
+ (id)imageUrlJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
