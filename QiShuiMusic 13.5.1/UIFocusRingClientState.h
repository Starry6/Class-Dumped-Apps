@interface UIFocusRingClientState : NSObject
@property (nonatomic) <UIFocusItem> currentFocusItem;
@property (nonatomic) NSMutableArray activeFocusLayers;
@property (nonatomic) NSMapTable activeFocusLayersToItems;
@property (nonatomic) NSString clientID;
- (void)setClientID:;
- (id)initWithClientID:;
- (void).cxx_destruct;
- (id)description;
- (id)clientID;
- (id)currentFocusItem;
- (void)setCurrentFocusItem:;
- (id)activeFocusLayers;
- (void)setActiveFocusLayers:;
- (id)activeFocusLayersToItems;
- (void)setActiveFocusLayersToItems:;
@end
