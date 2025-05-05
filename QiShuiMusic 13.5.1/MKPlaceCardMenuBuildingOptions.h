@interface MKPlaceCardMenuBuildingOptions : NSObject
@property (nonatomic) UIMenuElement headerMenuElement;
@property (nonatomic) NSArray requestedActionTypes;
@property (nonatomic) BOOL addMismatchedItems;
- (void).cxx_destruct;
- (id)initWithRequestedActionTypes:;
- (id)headerMenuElement;
- (void)setHeaderMenuElement:;
- (id)requestedActionTypes;
- (BOOL)addMismatchedItems;
- (void)setAddMismatchedItems:;
@end
