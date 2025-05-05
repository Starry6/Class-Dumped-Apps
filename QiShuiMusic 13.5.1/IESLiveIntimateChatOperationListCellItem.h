@interface IESLiveIntimateChatOperationListCellItem : IESLiveDynamicModel
@property (nonatomic) q sectionType;
@property (nonatomic) IESLiveLinkMicListUserAdapterModel userModel;
@property (nonatomic) q applyReasonLines;
@property (nonatomic) q exposedAppliersCount;
@property (nonatomic) NSArray moreApplierAvatarURLs;
@property (nonatomic) BOOL hasMoreAppliers;
@property (nonatomic) BOOL showPaidPrice;
@property (nonatomic) @? operation;
@property (nonatomic) @? tapAvatarCallback;
- (void)setShowPaidPrice:;
- (void)setTapAvatarCallback:;
- (BOOL)showPaidPrice;
- (id)tapAvatarCallback;
- (id)operation;
- (void)setOperation:;
- (void).cxx_destruct;
- (double)cellHeight;
@end
