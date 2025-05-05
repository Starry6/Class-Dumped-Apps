@interface IESLiveECShopCartItem : NSObject
@property (nonatomic) HTSLiveToolbarItem toolbarItem;
@property (nonatomic) @? clickEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithToolBarItem:;
- (void)setCustomItemView:;
- (void)setHiddenForLandscape:;
- (void)setItemHidden:;
- (void)setOnItemTapper:;
- (id)clickEvent;
- (void).cxx_destruct;
- (void)setClickEvent:;
- (id)toolbarItem;
- (void)setToolbarItem:;
- (void)setItemImage:;
@end
