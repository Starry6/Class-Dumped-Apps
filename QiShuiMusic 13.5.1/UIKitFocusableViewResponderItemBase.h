@interface UIKitFocusableViewResponderItemBase : NSObject
@property (nonatomic) NSString swiftui_focusGroupIdentifier;
- (id)focusGroupIdentifier;
- (void)_searchForFocusRegionsInContext:;
- (id)_regionForFocusedItem:inCoordinateSpace:;
- (id)swiftui_regionForFocusedItem:inCoordinateSpace:;
- (void)swiftui_searchForFocusRegionsInContext:;
- (id)swiftui_focusGroupIdentifier;
@end
