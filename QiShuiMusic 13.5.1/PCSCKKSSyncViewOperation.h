@interface PCSCKKSSyncViewOperation : PCSCKKSOperation
@property (nonatomic) PCSCKKSItemModifyContext context;
@property (nonatomic) CKKSControl CKKSControl;
@property (nonatomic) NSString view;
- (id)context;
- (void)start;
- (id)view;
- (void).cxx_destruct;
- (void)setView:;
- (id)initWithItemModifyContext:;
- (BOOL)ensureControl;
- (void)checkTLKStatus;
- (void)syncView;
- (id)CKKSControl;
- (void)setCKKSControl:;
@end
