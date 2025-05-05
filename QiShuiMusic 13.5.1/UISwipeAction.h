@interface UISwipeAction : UIContextualAction
@property (nonatomic) @? completionHandler;
@property (nonatomic) UIColor color;
@property (nonatomic) UIImage icon;
@property (nonatomic) UIVisualEffect backgroundEffect;
@property (nonatomic) BOOL canBeTriggeredBySwipe;
@property (nonatomic) BOOL resetsSwipedRow;
- (id)init;
- (void)setColor:;
- (id)icon;
- (void)setCompletionHandler:;
- (id)backgroundEffect;
- (id)color;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setBackgroundEffect:;
- (id)completionHandler;
- (void)resetSwipedRow;
- (BOOL)canBeTriggeredBySwipe;
- (void)setCanBeTriggeredBySwipe:;
- (BOOL)resetsSwipedRow;
- (void)setResetsSwipedRow:;
+ (id)swipeActionWithStyle:title:handler:;
@end
