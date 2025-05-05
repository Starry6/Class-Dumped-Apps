@interface IESLiveStackManager : NSObject
@property (nonatomic) NSMapTable containerTable;
@property (nonatomic) NSMutableArray stateObservers;
@property (nonatomic) IESLiveStackConfig stackConfig;
@property (nonatomic) NSMutableDictionary viewContainersMapping;
- (void)setStackConfig:;
- (void)executeAtState:;
- (id)containerTable;
- (void)deregisterContainer:;
- (id)initWithStackConfig:;
- (id)queryContainerByType:;
- (void)registerContainer:;
- (void)setContainerTable:;
- (void)setViewContainersMapping:;
- (void)setViewType:mappingContainer:;
- (id)stackConfig;
- (id)viewContainersMapping;
- (id)init;
- (id)stateObservers;
- (void).cxx_destruct;
- (void)setStateObservers:;
- (void)addStateObserver:;
@end
