@interface IESECLiveCATriggerEvent : NSObject
@property (nonatomic) NSString triggerEvent;
@property (nonatomic) NSString triggerName;
@property (nonatomic) NSNumber triggerInterval;
@property (nonatomic) NSArray featureList;
- (id)triggerInterval;
- (void)setTriggerInterval:;
- (void)setTriggerEvent:;
- (id)triggerEvent;
- (id)featureList;
- (void)setFeatureList:;
- (void).cxx_destruct;
- (id)triggerName;
- (void)setTriggerName:;
@end
