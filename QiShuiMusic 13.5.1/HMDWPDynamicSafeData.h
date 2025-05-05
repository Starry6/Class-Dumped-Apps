@interface HMDWPDynamicSafeData : NSObject
@property (nonatomic) Q atomicInfo;
- (id)initStoreObject;
- (unsigned long long)atomicInfo;
- (BOOL)getDataIfPossible:;
- (void)setAtomicInfo:;
- (void)storeData:;
- (void)dealloc;
- (id)getObject;
- (id)initWithLength:;
- (void).cxx_destruct;
+ (id)safeDataStoreObject;
+ (id)safeDataWithSize:;
@end
