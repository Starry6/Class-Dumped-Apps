@interface IESLiveGiftDefaultOperationItem : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) <IESLiveGiftPanelReaction> reaction;
@property (nonatomic) RACCommand loginActionCommand;
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
@property (nonatomic) # cellClass;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) BOOL enable;
@property (nonatomic) RACCommand didSelectItemCommand;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)giftPanelDataSharing;
- (id)initWithGiftPanelDataSharing:;
- (BOOL)isLoginWithLiveAuth;
- (id)loginActionCommand;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
- (Class)cellClass;
- (id)cellSize;
- (void)setCellSize:;
- (id)reaction;
- (void)setReaction:;
- (void)setCellClass:;
@end
