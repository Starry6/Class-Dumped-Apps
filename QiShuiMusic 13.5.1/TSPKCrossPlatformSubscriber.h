@interface TSPKCrossPlatformSubscriber : NSObject
@property (nonatomic) TSPKCrossPlatformModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)extractValidCrossPlatformInfos:;
- (id)callingInfoStringWithArray:;
- (id)eventNameWithEvent:;
- (id)filterParamsWithEvent:;
- (id)hanleEvent:;
- (BOOL)isEnable;
- (id)paramsWithEvent:crpCallingEventsStr:;
- (void)setConfigs:;
- (id)model;
- (id)uniqueId;
- (void)setModel:;
- (void).cxx_destruct;
@end
