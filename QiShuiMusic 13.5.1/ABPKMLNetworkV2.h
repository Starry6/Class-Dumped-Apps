@interface ABPKMLNetworkV2 : NSObject
@property (nonatomic) NSMutableDictionary inputBuffers;
@property (nonatomic) NSMutableDictionary outputBuffers;
- (BOOL)execute;
- (void)dealloc;
- (void).cxx_destruct;
- (id)inputBuffers;
- (id)initWithNetworkPath:inputNames:outputNames:useSurface:;
- (id)initWithNetworkPath:networkConfig:inputNames:outputNames:useSurface:;
- (BOOL)changeNetWorkConfig:;
- (id)outputBuffers;
@end
