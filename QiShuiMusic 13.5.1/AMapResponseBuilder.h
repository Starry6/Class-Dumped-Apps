@interface AMapResponseBuilder : NSObject
+ (id)buildAOSResponseWithData:responseClass:error:outJsonDict:;
+ (void)buildNearbyResponseWithData:error:outJsonDict:;
+ (id)buildResponseWithData:responseClass:error:outJsonDict:;
+ (id)buildV4ResponseWithData:responseClass:error:outJsonDict:;
+ (long long)errorCodeWithAOSInfoCode:;
+ (long long)errorCodeWithServerInfoCode:;
+ (id)errorWithErrorCode:info:;
+ (id)errorWithURLError:;
+ (id)errorWithYuntuErrorCode:info:;
@end
