@interface AWEIMGroupImpl.FriendsAlbumLongPressPanelConfiguration : NSObject
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage icon;
@property (nonatomic) @? willAppearBlock;
@property (nonatomic) @? didClickBlock;
- (id)didClickBlock;
- (void)setDidClickBlock:;
- (id)willAppearBlock;
- (void)setWillAppearBlock:;
- (id)init;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)shouldShow;
- (void)setShouldShow:;
@end
