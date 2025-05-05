@interface TTVideoEngineMetricKit : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveMetricPayloads:;
+ (void)clearInfo;
+ (id)getDiagnoseReport;
+ (void)addSubscriber:;
+ (void)removeSubscriber:;
@end
