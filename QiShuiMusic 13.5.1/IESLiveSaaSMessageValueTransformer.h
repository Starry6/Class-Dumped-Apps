@interface IESLiveSaaSMessageValueTransformer : NSObject
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformValue:;
- (id)mixMessageWhitelist;
- (Class)parseClassForMessageWith:;
- (id)parseMessageWith:;
- (id)preproccessWithMethod:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
