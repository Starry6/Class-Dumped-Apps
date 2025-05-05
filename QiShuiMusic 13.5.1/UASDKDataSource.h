@interface UASDKDataSource : NSObject
+ (void)generateDataCompletion:;
+ (id)ipInfo;
+ (id)ipListInfoWithInterfaceName:;
+ (BOOL)isCellOpenedWithPrivateInfo:;
+ (id)networkDiagnoseInfo;
+ (id)deviceInfo;
+ (id)uniqueId;
+ (id)requestData;
@end
