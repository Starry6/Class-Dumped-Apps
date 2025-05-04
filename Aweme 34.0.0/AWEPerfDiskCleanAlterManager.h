@interface AWEPerfDiskCleanAlterManager : NSObject
@property (nonatomic) AWEStorage universalStorage;
@property (nonatomic) q cleanSize;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL showing;
- (id)universalStorage;
- (void)setUniversalStorage:;
- (BOOL)shouldAlter;
- (long long)cleanSize;
- (void)setPrepared:;
- (void)setCleanSize:;
- (void)prepare;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)didShow;
- (BOOL)showing;
- (BOOL)prepared;
- (void)setShowing:;
- (void)updateInfo;
+ (id)shareManager;
@end
