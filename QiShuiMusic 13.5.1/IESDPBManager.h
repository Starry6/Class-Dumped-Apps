@interface IESDPBManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary adaptorRegisters;
- (id)adaptorRegisters;
- (id)allBiz;
- (void)clearAdaptorForBusiness:;
- (id)getAdaptorForBusiness:;
- (id)getDefaultAdaptor;
- (id)registerAdaptorForBusiness:;
- (void)setAdaptorRegisters:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedInstance;
@end
