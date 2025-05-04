@interface AWEMRCommonSubscribeNetworkManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)fetchCommonSubscribeGetWithProvider:completion:;
+ (void)fetchCommonSubscribeGetWithProvider:config:completion:;
+ (void)fetchCommonSubscribeSetWithModel:completion:;
+ (void)fetchCommonSubscribeSetWithModel:config:completion:;
+ (void)fetchCommonSubscribeManageWithConfig:completion:;
+ (id)generateNetworkFinishMonitor;
+ (void)trackSLOWithMonitor:networkUrlPath:networkProvider:networkResult:;
+ (void)fetchCommonSubscribeManageDetailWithProvider:config:completion:;
+ (void)fetchCommonSubscribePopGetWithProvider:config:completion:;
+ (void)notifyOnNetworkSuccess:;
+ (void)p_trackSLOWithMonitor:sloModel:;
+ (id)validateResponse:networkUrlPath:;
+ (id)validateServiceAccountList:;
+ (id)validateServiceAccount:;
+ (id)validatePopupModel:;
+ (id)validateSubcategory:;
+ (id)validateChannel:;
+ (void)fetchCommonSubscribeManageWithCompletion:;
+ (void)fetchCommonSubscribeManageDetailWithProvider:completion:;
+ (void)fetchCommonSubscribePopGetWithProvider:completion:;
@end
