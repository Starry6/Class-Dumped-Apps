@interface AWEViewHistoryNotificationModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSMutableArray fromUser;
@property (nonatomic) NSNumber mergeCount;
@property (nonatomic) AWERelationDynamicLable relationLabel;
@property (nonatomic) NSString labelText;
@property (nonatomic) q labelType;
@property (nonatomic) NSString labelTrack;
- (id)aweme;
- (void)setAweme:;
- (id)relationLabel;
- (void)setRelationLabel:;
- (void)setLabelTrack:;
- (id)mergeCount;
- (void)setFromUser:;
- (id)labelTrack;
- (void)setMergeCount:;
- (id)labelText;
- (long long)labelType;
- (void)setLabelType:;
- (void)setLabelText:;
- (void).cxx_destruct;
- (id)fromUser;
+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
