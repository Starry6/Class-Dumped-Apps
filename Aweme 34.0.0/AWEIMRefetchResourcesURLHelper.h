@interface AWEIMRefetchResourcesURLHelper : NSObject
- (void)refetchURLWithResourcesType:format:URI:completion:;
- (void)refetchURLWithResourcesType:format:URL:completion:;
- (void)p_refetchURLWithResourcesType:format:paramType:paramKey:completion:;
- (id)p_requestContextWithType:format:paramType:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
