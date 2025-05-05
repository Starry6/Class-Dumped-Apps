@interface UIIndexBarVisualStyle_Base : NSObject
@property (nonatomic) UIIndexBarView indexBarView;
@property (nonatomic) BOOL canBecomeFocused;
@property (nonatomic) BOOL overlay;
@property (nonatomic) double minLineHeight;
@property (nonatomic) double indexWidth;
@property (nonatomic) BOOL expanded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)overlay;
- (id)initWithView:;
- (BOOL)canBecomeFocused;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)indexBarView;
- (void)handleTouch:withEvent:touchedEntryIndex:;
- (id)_visibleBoundsForRect:stride:;
- (long long)_indexForEntryAtPoint:;
- (id)displayEntryFromEntry:;
- (void)setIndexBarView:;
- (double)minLineHeight;
@end
