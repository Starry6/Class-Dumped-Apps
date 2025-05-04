@interface AWEProfileServiceCenter : NSObject
@property (nonatomic) NSMapTable serviceToImpTable;
@property (nonatomic) {os_unfair_lock_s=I} lock;
- (void)bindService:implementation:;
- (id)serviceImp:;
- (void)setServiceToImpTable:;
- (id)serviceToImpTable;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
