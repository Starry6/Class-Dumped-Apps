@interface IESECMarketingBizManager : NSObject
@property (nonatomic) NSMutableArray bridgeHandlerList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addBtmTokenIfNeededWithHandler:params:host:;
- (id)bridgeHandlerList;
- (void)commonBridgeCallWithAction:params:hostView:completion:;
- (id)getCurrentHandlerMessage;
- (void)loadWithParamsBuilder:;
- (void)registerBridgeHandler;
- (void)removeWithTargetPage:rit:component:;
- (void)sendEventWithTargetPage:rit:component:eventName:params:;
- (void)setBridgeHandlerList:;
- (id)settingsConfig;
- (void).cxx_destruct;
+ (void)addComponentWithBizParams:rit:layoutInfo:targetView:extraData:commonLogParams:completion:;
+ (void)removeComponentWithRit:targetView:;
+ (id)shared;
+ (id)sharedInstance;
@end
