@interface CSJLuUgenContentView : CSJUgenContentView
- (BOOL)override_checkHasMoreData;
- (void)override_exposureWithEvent:extraDic:adExtraDataDic:;
- (void)override_jumpWithEvent:extraDic:adExtraDataDic:;
- (void)override_reportClickInfoWithEvent:cardMaterial:extraDic:adExtraDataDic:;
- (void)pbu_lu_OpenAppDownloadWithEvent:extraDic:adExtraDataDic:;
- (void)pbu_lu_OpenLandpageWithEvent:webUrl:extraDic:adExtraDataDic:;
- (void)pbu_lu_openInternalStoreWithMaterial:extraDic:adExtraDataDic:;
- (void)pbu_oceanengineReport_get;
- (void)pbu_openAppPermissionPolicyWithEvent:;
- (void)pbu_openAppPolicyWithEvent:;
- (void)pbu_report_1455Station_withLabel:ugenEvent:extraDic:adExtraDataDic:;
- (void)reportClick_to_stationOrOceanenginWithEvent:cardMaterial:extraDic:adExtraDataDic:;
- (void)reportShow_to_stationOrOceanenginWithEvent:cardMaterial:extraDic:adExtraDataDic:;
- (id)subTemplateIdWithDataInfo:;
- (id)urlInAppPkgInfoFromDataInfo:key:;
@end
