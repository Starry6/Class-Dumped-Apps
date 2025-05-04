@interface AWEIMMenuEditMediaComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMAwemeMediaImageDownloader> imageLoader;
@property (nonatomic) AWEIMImageEditService editService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowItemWithMessage:context:;
- (id)menuItemTitle:context:;
- (id)menuItemImageName:context:;
- (id)menuTrackerName:context:;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:context:;
- (id)menuItemLightImageURL:context:;
- (id)menuItemDarkImageURL:context:;
- (id)editService;
- (void)setEditService:;
- (void)setImageLoader:;
- (void).cxx_destruct;
- (id)imageLoader;
@end
