@interface HybridRLBaseProcessor : NSObject
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) HybridRLUrlParamConfig paramConfig;
@property (nonatomic) HybridRLOperator advancedOperator;
@property (nonatomic) NSString debugMessage;
@property (nonatomic) NSString resourceLoaderName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setParamConfig:;
- (id)advancedOperator;
- (void)fetchResourceWithURL:container:loaderConfig:taskConfig:resolve:reject:;
- (id)paramConfig;
- (id)resourceLoaderName;
- (void)setAdvancedOperator:;
- (BOOL)isCanceled;
- (id)init;
- (void)dealloc;
- (void)cancelLoad;
- (void)setIsCanceled:;
- (void).cxx_destruct;
- (id)debugMessage;
- (void)setDebugMessage:;
@end
