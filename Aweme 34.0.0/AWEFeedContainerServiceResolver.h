@interface AWEFeedContainerServiceResolver : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSMutableDictionary servicesDict;
@property (nonatomic) NSMutableDictionary classDict;
@property (nonatomic) @? setupServiceBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerClass:forProtocol:;
- (void)setSetupServiceBlock:;
- (id)instanceForProtocol:;
- (id)servicesDict;
- (id)setupServiceBlock;
- (void)registerInstance:forProtocol:;
- (void)setServicesDict:;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)classDict;
- (void)setClassDict:;
@end
