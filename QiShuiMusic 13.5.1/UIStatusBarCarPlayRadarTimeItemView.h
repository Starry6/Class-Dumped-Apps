@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView
- (void)dealloc;
- (BOOL)canBecomeFocused;
- (id)contentsImage;
- (id)initWithFrame:;
- (long long)buttonType;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)allowsUserInteraction;
- (id)highlightImage;
- (BOOL)usesAdvancedActions;
- (id)_timeImageSet;
- (void)_gatheringLogsDidChangeStatusNotification:;
- (BOOL)_showRadarButtonForInternalInstalls;
@end
