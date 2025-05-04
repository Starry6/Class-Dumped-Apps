@interface AWEIMChatCellRender : NSObject
- (void)layoutPresenters:inCell:targetPresenter:;
- (void)renderViewModel:inCell:;
- (id)p_findOrBuildviewForPresenter:inCell:;
- (void)p_clearDirtyViews:inCell:;
- (void)p_arrangementTopContainer:inCell:;
- (void)p_arrangementTailContainer:inCell:;
- (void)p_arrangementTailUpperContainer:tailLowerContainer:inCell:;
- (void)p_arrangementBottomContainer:inCell:;
- (void)p_arrangementContainer:withViews:;
@end
