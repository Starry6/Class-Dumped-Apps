@interface AWEViewHistoryNotificationModel : IESIMBaseApiModel
@property (nonatomic) IESIMAwemeModel aweme;
@property (nonatomic) NSMutableArray fromUser;
@property (nonatomic) NSNumber mergeCount;
@property (nonatomic) IESIMRelationDynamicLable relationLabel;
@property (nonatomic) NSString labelText;
@property (nonatomic) q labelType;
- (id)aweme;
- (id)mergeCount;
- (id)relationLabel;
- (void)setAweme:;
- (void)setFromUser:;
- (void)setMergeCount:;
- (void)setRelationLabel:;
- (void)setLabelType:;
- (long long)labelType;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)labelText;
- (id)fromUser;
+ (id)awemeJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
