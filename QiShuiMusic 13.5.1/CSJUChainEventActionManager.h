@interface CSJUChainEventActionManager : NSObject
@property (nonatomic) CSJMaterialMeta material;
@property (nonatomic) BUThreadSafeDictionary uchainEventTrackerData;
- (void)setUchainEventTrackerData:;
- (id)uchainEventTrackerData;
- (void).cxx_destruct;
- (id)material;
- (void)setMaterial:;
+ (void)gotoDetailPage:context:;
+ (void)gotoVideoDetailPage:context:;
+ (void)handleAppActionWithModel:context:downloadActionType:sucessCallBack:failedCallback:;
+ (void)handleVideoAdActionWithModel:context:;
+ (void)handleWebPageActionWithModel:context:;
+ (void)openPolicy:context:;
+ (BOOL)validUChain;
@end
