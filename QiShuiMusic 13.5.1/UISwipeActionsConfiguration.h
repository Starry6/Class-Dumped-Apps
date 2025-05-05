@interface UISwipeActionsConfiguration : NSObject
@property (nonatomic) BOOL autosizesButtons;
@property (nonatomic) q _swipeActionsStyle;
@property (nonatomic) double _roundedStyleCornerRadius;
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL performsFirstActionWithFullSwipe;
- (id)init;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (BOOL)performsFirstActionWithFullSwipe;
- (void)setPerformsFirstActionWithFullSwipe:;
- (BOOL)_autosizesButtons;
- (void)_setAutosizesButtons:;
- (long long)_swipeActionsStyle;
- (void)_setSwipeActionsStyle:;
- (double)_roundedStyleCornerRadius;
- (void)_setRoundedStyleCornerRadius:;
+ (id)configurationWithActions:;
@end
