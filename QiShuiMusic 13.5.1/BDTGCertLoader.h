@interface BDTGCertLoader : NSObject
@property (nonatomic) NSMutableArray loadCompletionBlocks;
- (void)loadCertFinishWithError:;
- (void)loadCertWithCompletion:;
- (id)loadCompletionBlocks;
- (void)preloadCert;
- (void)setLoadCompletionBlocks:;
- (id)init;
- (void).cxx_destruct;
+ (void)loadCertWithCompletion:;
+ (void)preloadCert;
+ (id)sharedInstance;
@end
