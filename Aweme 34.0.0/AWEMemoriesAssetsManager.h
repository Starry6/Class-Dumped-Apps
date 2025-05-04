@interface AWEMemoriesAssetsManager : NSObject
@property (nonatomic) NSLock lock;
- (BOOL)nextUploadAvailable;
- (id)uploadedAssetsLocalIdentifiers;
- (void)uploadAndStoreScannedResources:;
- (void)uploadAssetsRecursively:chunkSize:newInstalled:success:failure:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
