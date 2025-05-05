@interface IESLiveSaaSAdminCellItem : BDDynamicModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailTitle;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) @? actionBlock;
- (id)actionBlock;
- (id)identifier;
- (void).cxx_destruct;
- (void)setActionBlock:;
@end
