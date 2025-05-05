@interface IESLiveAdminCellItem : IESLiveDynamicModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailTitle;
@property (nonatomic) NSString additionText;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? showBlock;
@property (nonatomic) BOOL isClassification;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) BOOL useStandardStyle;
@property (nonatomic) double cellHeight;
- (void)setShowBlock:;
- (void)setUseStandardStyle:;
- (id)showBlock;
- (BOOL)useStandardStyle;
- (id)actionBlock;
- (id)identifier;
- (void).cxx_destruct;
- (void)setActionBlock:;
- (double)cellHeight;
- (void)setCellHeight:;
@end
