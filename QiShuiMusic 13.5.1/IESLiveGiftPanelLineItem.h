@interface IESLiveGiftPanelLineItem : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) # cellClass;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) BOOL enable;
@property (nonatomic) RACCommand didSelectItemCommand;
@property (nonatomic) <IESLiveGiftPanelReaction> reaction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithGiftPanelDataSharing:;
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
