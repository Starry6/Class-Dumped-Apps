@interface ASSNetworkCoordinator : NSObject
+ (id)parseRPCResult:;
+ (id)generateStaticRequest:withArgs:withModel:;
+ (id)updateStaticInfo:withArgs:withModel:;
@end
