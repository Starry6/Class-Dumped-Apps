@interface AWEIMOfficialActionResponseModel : IESIMBaseApiModel
@property (nonatomic) NSNumber noticeID;
@property (nonatomic) q actionStatus;
@property (nonatomic) AWEActionResponseModel actionResponse;
@property (nonatomic) BOOL awemeItemDisable;
- (long long)actionStatus;
- (BOOL)awemeItemDisable;
- (id)noticeID;
- (void)setActionStatus:;
- (void)setAwemeItemDisable:;
- (void)setNoticeID:;
- (void).cxx_destruct;
- (id)actionResponse;
- (void)setActionResponse:;
+ (id)actionResponseJSONTransformer;
+ (id)actionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
