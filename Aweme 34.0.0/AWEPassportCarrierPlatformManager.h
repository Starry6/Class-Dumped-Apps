@interface AWEPassportCarrierPlatformManager : NSObject
+ (id)carrierNameForCarrierType:;
+ (id)carrierForPlatform:;
+ (id)carrierForCarrierType:;
+ (id)carrierURLForCarrierType:;
+ (unsigned long long)platformForCarrierType:;
@end
