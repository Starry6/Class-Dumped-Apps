@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation
@property (nonatomic) PCSCKKSItemModifyContext context;
- (id)context;
- (void)start;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithItemModifyContext:;
- (void)createPCSIdentity;
- (void)storePCSIdentity:;
- (int)addAndNotifyOnSync:attributes:returnAttributes:complete:;
- (void)setIdentityToCurrent;
- (void)itemStored:;
@end
