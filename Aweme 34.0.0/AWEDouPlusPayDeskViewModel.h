@interface AWEDouPlusPayDeskViewModel : NSObject
@property (nonatomic) AWEDouPlusPayDeskModel dataModel;
@property (nonatomic) NSDictionary bizParams;
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) q sceneType;
- (id)bizParams;
- (void)setBizParams:;
- (id)initWithParamDict:;
- (void)trackerClickcDouPlusConfirmPayment;
- (id)logParams;
- (void)monitorWithPaySuccess:errorStatus:errorMessage:;
- (void)trackerDouPlusPayStatus:;
- (void)setupDataModelWithParamDict:;
- (id)paramsDictFromJsonString:;
- (void)setLogParams:;
- (id)moneyStringInBizParams;
- (id)commomReportParams;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
- (long long)sceneType;
- (void)setSceneType:;
@end
