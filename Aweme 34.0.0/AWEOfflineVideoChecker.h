@interface AWEOfflineVideoChecker : NSObject
- (BOOL)hasEnoughStorageWithModels:;
- (BOOL)hasCachedModel:;
- (BOOL)hasDownloadedModel:;
- (BOOL)hasEnoughStorageWithModel:;
- (id)init;
- (void)setup;
+ (id)sharedInstance;
@end
