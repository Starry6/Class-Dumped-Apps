@interface BDXRLBaseProcessor : NSObject
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BDXRLUrlParamConfig paramConfig;
@property (nonatomic) BDXRLOperator advancedOperator;
@property (nonatomic) NSString debugMessage;
@property (nonatomic) <BDXRLMonitorDelegate> monitorDelegate;
@property (nonatomic) NSString resourceLoaderName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setParamConfig:;
- (id)monitorDelegate;
- (id)advancedOperator;
- (void)fetchResourceWithURL:loaderConfig:taskConfig:resolve:reject:;
- (id)initWithMonitorDelegate:;
- (id)paramConfig;
- (id)resourceLoaderName;
- (void)setAdvancedOperator:;
- (void)setMonitorDelegate:;
- (BOOL)isCanceled;
- (void)dealloc;
- (void)cancelLoad;
- (void)setIsCanceled:;
- (void).cxx_destruct;
- (id)debugMessage;
- (void)setDebugMessage:;
@end
