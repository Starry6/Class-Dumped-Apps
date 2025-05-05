@interface BDUGSyncDBTransaction : NSObject
@property (nonatomic) BDUGSyncDBBusiness dbBase;
@property (nonatomic) BOOL isInTransaction;
- (id)initWithDBBase:;
- (id)dbBase;
- (void)setDbBase:;
- (BOOL)commit;
- (BOOL)rollback;
- (BOOL)beginTransaction;
- (void).cxx_destruct;
- (BOOL)isInTransaction;
@end
