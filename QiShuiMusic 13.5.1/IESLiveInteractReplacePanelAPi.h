@interface IESLiveInteractReplacePanelAPi : HTSLiveApi
@property (nonatomic) NSNumber roomId;
- (void)adjustSeat:completion:;
- (void)getListWithGuestId:completion:;
- (void)pingAfterClosePanel;
- (void)pingDuringSelecting;
- (void)pingType:;
- (id)roomId;
- (void)setRoomId:;
- (void).cxx_destruct;
@end
