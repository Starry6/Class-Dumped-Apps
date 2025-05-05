@interface AWEIMStrangerTracker : NSObject
@property (nonatomic) NSMutableSet trackCells;
- (void)addTrackCellWithModel:;
- (BOOL)allowTrack:;
- (id)getFirstLabelWithViewModel:;
- (id)getSecondLabelWithViewModel:;
- (void)removeTrackCellWithModel:;
- (void)setTrackCells:;
- (id)trackCells;
- (void)trackDeleteChatEvent:indexPath:session:;
- (void)trackEnterChatEvent:;
- (void)trackEnterProfileEvent:from:;
- (void)trackEventWithDisplayCell:;
- (void)trackShowRevealViewEvent:;
- (id)init;
- (void).cxx_destruct;
@end
