@interface AWEIMOfficialActionResponseModel : IESIMBaseApiModel
@property (nonatomic) NSNumber noticeID;
@property (nonatomic) q actionStatus;
@property (nonatomic) AWEActionResponseModel actionResponse;
@property (nonatomic) BOOL awemeItemDisable;
@property (nonatomic) BOOL noticeDisable;
@property (nonatomic) NSArray disableKeys;
- (BOOL)noticeDisable;
- (void)setNoticeDisable:;
- (void)setNoticeID:;
- (id)noticeID;
- (long long)actionStatus;
- (void)setActionStatus:;
- (BOOL)awemeItemDisable;
- (id)disableKeys;
- (void)setAwemeItemDisable:;
- (void)setDisableKeys:;
- (void).cxx_destruct;
- (id)actionResponse;
- (void)setActionResponse:;
+ (id)actionStatusJSONTransformer;
+ (id)actionResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
