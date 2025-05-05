@interface IESGurdApplyPackageManager : NSObject
@property (nonatomic) NSMutableDictionary applyCompletionDictionary;
- (id)applyCompletionDictionary;
- (void)applyPackage:completion:;
- (void)applySingleFile:completion:;
- (void)applyZstdPackage:completion:;
- (void)patchZstd:patch:completion:;
- (void)reportApplyResult:error:model:;
- (void)saveActiveMetaData:;
- (void)setApplyCompletionDictionary:;
- (void)unzipWebCache:zipFilePath:completion:;
- (void)updateResources:tempDirectory:completion:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
