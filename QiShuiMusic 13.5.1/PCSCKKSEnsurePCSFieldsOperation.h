@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation
@property (nonatomic) PCSCKKSItemModifyContext context;
- (id)context;
- (void)start;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithItemModifyContext:;
- (BOOL)haveCKKSPlaintextEntitlements;
- (int)updateKeychain:withAttributes:;
@end
