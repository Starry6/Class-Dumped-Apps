@interface HMDNetworkHelper : NSObject
+ (id)connectTypeName;
+ (long long)connectTypeCode;
+ (id)carrierRegions;
+ (long long)connectTypeCodeForCellularDataService;
+ (id)connectTypeNameForCellularDataService;
+ (long long)currentNetQuality;
+ (id)carrierMCC;
+ (id)carrierMNC;
+ (id)carrierName;
+ (id)currentRadioAccessTechnology;
@end
