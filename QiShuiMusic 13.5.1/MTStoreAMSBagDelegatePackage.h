@interface MTStoreAMSBagDelegatePackage : NSObject
@property (nonatomic) @? hostAppBlock;
@property (nonatomic) MTConfigAMSMetricsDelegate configDelegate;
@property (nonatomic) MTEventRecorderAMSMetricsDelegate eventRecorderDelegate;
@property (nonatomic) MTConvenienceEnvironmentDelegate environmentDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAMSBag:;
- (id)configDelegate;
- (id)eventRecorderDelegate;
- (id)environmentDelegate;
- (id)initWithAMSBag:containerId:pageURLBlock:resourceRevNumBlock:hostAppBlock:;
- (id)hostAppBlock;
- (void)setHostAppBlock:;
- (void)setConfigDelegate:;
- (void)setEventRecorderDelegate:;
- (void)setEnvironmentDelegate:;
@end
