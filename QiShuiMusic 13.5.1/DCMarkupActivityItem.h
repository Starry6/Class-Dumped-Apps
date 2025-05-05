@interface DCMarkupActivityItem : NSObject
@property (nonatomic) ICDocCamDocumentInfo documentInfo;
@property (nonatomic) ICDocCamImageCache imageCache;
- (id)imageCache;
- (void)setDocumentInfo:;
- (void)setImageCache:;
- (void).cxx_destruct;
- (id)documentInfo;
- (id)initWithDocumentInfo:imageCache:;
@end
