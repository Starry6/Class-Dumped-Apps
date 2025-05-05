@interface HMDImageOpaqueLoader : NSObject
@property (nonatomic) BOOL envAbnormal;
@property (nonatomic) Q currentlyImageCount;
@property (nonatomic) NSArray currentlyUsedImages;
- (void)setEnvAbnormal:;
- (unsigned long long)currentlyImageCount;
- (id)currentlyUsedImages;
- (BOOL)envAbnormal;
- (id)imageForAddress:;
- (void)loadExternal;
- (id)loadImageFile:error:;
- (void)loadMain;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDirectory:;
@end
