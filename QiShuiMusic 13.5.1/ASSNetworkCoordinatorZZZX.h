@interface ASSNetworkCoordinatorZZZX : NSObject
+ (id)parseRPCResult:;
+ (id)generateStaticRequest:withArgs:withModel:;
+ (BOOL)updateDynamicInfo:withModel:;
+ (id)updateStaticInfo:withArgs:withModel:;
@end
