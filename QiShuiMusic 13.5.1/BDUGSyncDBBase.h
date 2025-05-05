@interface BDUGSyncDBBase : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSInteger version;
@property (nonatomic) FMDatabase db;
- (void)upgradeFrom:to:;
- (void)configureDB;
- (void)createTable;
- (void)downgradeFrom:to:;
- (id)db;
- (id)path;
- (id)init;
- (BOOL)open;
- (void)setVersion:;
- (int)version;
- (void)setPath:;
- (BOOL)close;
- (void).cxx_destruct;
- (void)setDb:;
- (id)initWithPath:version:;
@end
