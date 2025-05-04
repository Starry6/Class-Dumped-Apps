@interface AWESurveyInfoModel : AWEBaseApiModel
@property (nonatomic) NSString settingKey;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString feData;
@property (nonatomic) NSString clientData;
@property (nonatomic) NSString extra;
@property (nonatomic) Q status;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWESurveyClientInfoModel clientInfoModel;
@property (nonatomic) double loadDuration;
- (void)setExtra:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)feData;
- (void)setLoadDuration:;
- (void)setClientInfoModel:;
- (id)clientInfoModel;
- (id)schema;
- (void)setStatus:;
- (id)extra;
- (void)setClientData:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)clientData;
- (id)settingKey;
- (double)loadDuration;
+ (id)JSONKeyPathsByPropertyKey;
@end
