@interface AWEBDABridgeMethodAdapter : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)adGetFeatureCallWithParamModel:completionHandler:model:;
+ (void)adGetPortraitCallWithParamModel:completionHandler:model:;
+ (id)satiParamsForPitayaCommerce:;
+ (void)recordAwemeResponseWithSatiParamsForPitayaCommerce:params:;
+ (void)adGetFeatureCallWithParam:completionHandler:model:;
+ (void)adGetPortraitCallWithParam:completionHandler:model:;
@end
