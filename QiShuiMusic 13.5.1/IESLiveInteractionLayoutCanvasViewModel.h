@interface IESLiveInteractionLayoutCanvasViewModel : NSObject
@property (nonatomic) IESLiveInteractionLayout layout;
@property (nonatomic) @? onCellModelsUpdateBlock;
@property (nonatomic) NSArray cellModels;
@property (nonatomic) BOOL isEnlargeMode;
- (id)cellModelWithConfig:;
- (id)cellModelWithIndex:;
- (id)cellModels;
- (id)createCellModelsWithLayout:;
- (void)insertRTCSessionView:linkMicUserID:isLocalPreview:preferredFrame:;
- (BOOL)isEnlargeMode;
- (id)onCellModelsUpdateBlock;
- (void)onCellModelsUpdated:;
- (void)setCellModels:;
- (void)setIsEnlargeMode:;
- (void)setOnCellModelsUpdateBlock:;
- (void)updateCellModelsWithLayout:;
- (void)updateSlotConfigsWithSlots:;
- (void)updateWithCurrentLayout;
- (void)updateWithLayout:;
- (long long)viewIndexForUser:;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (BOOL)isValidIndex:;
- (void)clean;
@end
