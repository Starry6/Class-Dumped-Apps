@interface IESECGoodsDetailHelper : NSObject
+ (void)addNativeParams:;
+ (id)entranceInfoJSONStringFromRequest:;
+ (id)eztfEnterParams:;
+ (id)mergedMetaParamFromMetaParams:entranceInfoJSONString:;
+ (id)parametersSetup:;
+ (id)pdpType:;
+ (void)preRequestWithParams:;
+ (void)registerServiceForParameters:;
+ (void)reportFissionBackFlowIfNeededWithParams:secActivityInfo:;
+ (id)requestWithSchema:;
+ (id)setupParametersWithNewRequest:;
+ (void)showGoodsDetail:;
+ (void)showGoodsDetailWithParams:source:completion:;
+ (void)showGoodsDetailWithPreview:;
+ (void)showLiveFloatOnTopIfNeeded:containerViewController:from:;
+ (void)showPDPWithRequest:;
+ (void)showParams:from:qualityInfo:completion:;
+ (void)showPdpWithSchemaBuilder:;
+ (void)trackGoodsDetailShowWithRequest:status:extraParams:;
+ (void)trackGoodsDetailStartWithRequest:;
+ (void)trackReflowEvent:;
@end
