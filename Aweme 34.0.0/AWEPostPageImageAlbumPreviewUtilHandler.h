@interface AWEPostPageImageAlbumPreviewUtilHandler : AWEPostPagePreviewUtilHandler
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)editService;
- (void)setEditService:;
- (void)willEnterNewcoverChooseEditPage;
- (void)configCoverImage;
- (void)resetPreuploadTaskIfNeed;
- (id)configPreviewControllerWithImage:index:editService:;
- (void).cxx_destruct;
@end
