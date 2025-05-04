@interface AWESequencePublishPreviewConfig : NSObject
@property (nonatomic) ACCRepositoryWorkspace workspace;
@property (nonatomic) <ACCSequenceEditServiceProtocol> editService;
@property (nonatomic) q startIndex;
@property (nonatomic) UIImage previewImage;
- (id)editService;
- (void)setEditService:;
- (id)workspace;
- (long long)startIndex;
- (void)setWorkspace:;
- (void).cxx_destruct;
- (void)setStartIndex:;
- (id)previewImage;
- (void)setPreviewImage:;
@end
