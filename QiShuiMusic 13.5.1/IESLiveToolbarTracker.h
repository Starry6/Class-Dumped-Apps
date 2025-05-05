@interface IESLiveToolbarTracker : NSObject
@property (nonatomic) HTSEventContext trackContext;
- (id)TrackIdTransformer:;
- (void)setTrackContext:;
- (void)trackAddItemEvent:type:groupId:withIdx:;
- (void)trackAddItemEvent:withIdx:;
- (id)trackContext;
- (void)trackItemMotionEvent:withIdx:;
- (void)trackMoreToolClickWithItem:;
- (void)trackRemoveItemEvent:withIdx:;
- (void)trackTappedDynamicMoreToolsItemEvent:withIdx:;
- (void)trackTappedItemEvent:type:groupId:withIdx:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
