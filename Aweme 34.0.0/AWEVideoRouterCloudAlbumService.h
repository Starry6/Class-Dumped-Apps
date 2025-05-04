@interface AWEVideoRouterCloudAlbumService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPrivatePostCloudAlbumButtonViewHidden;
- (void)updatePrivatePostCloudAlbumButtonViewShowFrequency;
- (Class)privatePostCloudAlbumCollectionViewCellClass;
- (id)privatePostCloudAlbumButtonView;
- (id)privatePostCloudAlbumViewModel;
- (BOOL)shouldShowCloudAlbumSwitch;
- (id)showCloudAlbumOnlinePopupViewEnterFrom:;
- (id)showCloudAlbumOfflinePopupView;
- (BOOL)isCloudAlbumOpen;
- (void)updatePrivatePostCloudAlbumButtonViewAppearData;
- (id)aAWEStudioCloudAlbumAdapter;
+ (Class)aAWEStudioCloudAlbumAdapterClass;
@end
