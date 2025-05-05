@interface AKAppleIDServerUIDataHarvester : NSObject
@property (nonatomic) NSDictionary harvestedData;
- (id)init;
- (void).cxx_destruct;
- (id)harvestedData;
- (void)harvestDataFromServerUIObjectModel:;
- (void)harvestDataFromCompanionResponse:;
- (void)_harvestDataFromClientInfo:withExtractor:;
- (void)harvestDataFromServerHTTPResponse:;
- (void)_harvestIDMSRecoveryHeadersInfo:;
- (void)harvestIDMSRecoveryInfoFromClientInfo:;
- (void)harvestIDMSRecoveryInfoFromHeaders:;
@end
