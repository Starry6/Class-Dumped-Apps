@interface IESECMarketingBizManagerV1 : NSObject
@property (nonatomic) NSMutableDictionary componentsMap;
@property (nonatomic) NSMutableDictionary eventSubscriberMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addComponentToMap:;
- (void)addComponentWithBizParams:rit:layoutInfo:targetView:extraData:commonLogParams:completion:;
- (void)changeComponentVisible:rit:targetView:;
- (id)componentKeyWithRit:view:;
- (id)componentsMap;
- (id)eventSubscriberMap;
- (id)getComponentWithBizParams:rit:componentId:targetView:layoutInfoMap:extraData:commonLogParams:completion:;
- (void)getComponentWithBizParams:rit:layoutInfo:extraData:commonLogParams:completion:;
- (id)parseBtmParamsFromData:;
- (void)registerSubscribes;
- (void)removeComponentWithRit:targetView:;
- (void)setComponentsMap:;
- (void)setEventSubscriberMap:;
- (void)unregisterSubscribes;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
