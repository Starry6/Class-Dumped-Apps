@interface IESLiveSaaSWishListFragment : IESLiveRoomComponent
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaURLHandler;
@property (nonatomic) HTSLiveToolbarItem anchorWishListItem;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorWishListItem;
- (void)componentDidMount;
- (void)p_loadWishListToolbarItem;
- (BOOL)p_shouldLoadWishListItem;
- (id)schemaURLHandler;
- (void)setAnchorWishListItem:;
- (void)setSchemaURLHandler:;
- (void)wishListItemDidClick;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (BOOL)isUIInFirstFrame;
+ (long long)preferredLoadPhase;
@end
