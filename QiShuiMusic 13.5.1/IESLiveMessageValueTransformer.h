@interface IESLiveMessageValueTransformer : NSObject
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformValue:;
- (Class)parseClassForMessageWith:;
- (id)parseMessageWith:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
