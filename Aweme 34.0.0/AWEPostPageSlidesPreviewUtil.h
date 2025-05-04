@interface AWEPostPageSlidesPreviewUtil : AWEPostPagePreviewUtilHandler
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (void)bindServices:;
- (void)configCoverImage;
- (id)configPreviewControllerWithImage:index:editService:;
- (void).cxx_destruct;
@end
