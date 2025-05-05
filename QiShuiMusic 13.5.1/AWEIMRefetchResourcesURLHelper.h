@interface AWEIMRefetchResourcesURLHelper : NSObject
- (void)p_refetchURLWithResourcesType:format:paramType:paramKey:completion:;
- (id)p_requestContextWithType:format:paramType:;
- (void)refetchURLWithResourcesType:format:URI:completion:;
- (void)refetchURLWithResourcesType:format:URL:completion:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end
