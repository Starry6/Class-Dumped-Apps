@interface ICImageAnalysisController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> photoLibraryQueue;
- (id)init;
- (void).cxx_destruct;
- (void)analyzeSearchableItems:completion:;
- (id)photoLibraryQueue;
+ (id)sharedController;
@end
