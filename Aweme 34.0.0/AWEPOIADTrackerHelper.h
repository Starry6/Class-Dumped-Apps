@interface AWEPOIADTrackerHelper : NSObject
+ (void)mergeAdExtraDataFromPOIData:toAdContext:;
+ (id)getAdTrackDictForPOISessionID:;
+ (void)trackIfAccordCreativeIDWithPOIData:context:;
+ (void)trackIfAccordAdTypeWithPOIData:context:;
+ (void)trackIfAccordAdTypeWithPOISessionID:context:;
+ (id)adTrackParamsForPOISessionID:;
@end
