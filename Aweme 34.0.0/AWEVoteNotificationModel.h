@interface AWEVoteNotificationModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSArray fromUser;
@property (nonatomic) AWEURLModel imageUrl;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSNumber mergeCount;
@property (nonatomic) NSString optionText;
@property (nonatomic) q refType;
@property (nonatomic) AWERelationDynamicLable relationLabel;
@property (nonatomic) NSString labelTrack;
@property (nonatomic) NSArray fansTagArray;
@property (nonatomic) NSNumber optionID;
- (id)aweme;
- (void)setAweme:;
- (id)relationLabel;
- (void)setRelationLabel:;
- (void)setSchemaUrl:;
- (void)setLabelTrack:;
- (id)mergeCount;
- (id)schemaUrl;
- (id)optionText;
- (void)setFromUser:;
- (id)labelTrack;
- (long long)refType;
- (id)fansTagArray;
- (void)setFansTagArray:;
- (void)setOptionID:;
- (void)setOptionText:;
- (void)setMergeCount:;
- (void)setRefType:;
- (void).cxx_destruct;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)optionID;
- (id)fromUser;
+ (id)imageUrlJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
