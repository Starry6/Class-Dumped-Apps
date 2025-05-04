@interface AWETabbarLiveGuideBubbleManager : NSObject
@property (nonatomic) BOOL shouldShowLiveGuideBubble;
@property (nonatomic) AWEBubble liveGuideBubbleView;
- (void)removeLiveGuideBubble;
- (void)showliveGuideBubbleIfNeed;
- (BOOL)_canShowLiveGuideBubble;
- (void)setShouldShowLiveGuideBubble:;
- (void)setLiveGuideBubbleView:;
- (id)liveGuideBubbleView;
- (BOOL)shouldShowLiveGuideBubble;
- (id)init;
- (void).cxx_destruct;
@end
