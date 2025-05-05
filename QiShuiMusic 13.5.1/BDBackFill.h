@interface BDBackFill : NSObject
@property (nonatomic) Q imageType;
@property (nonatomic) NSURL thumbImageURL;
@property (nonatomic) NSURL previewImageURL;
@property (nonatomic) NSURL originalImageURL;
- (id)originalImageURL;
- (void)setOriginalImageURL:;
- (void)setPreviewImageURL:;
- (void)setThumbImageURL:;
- (id)thumbImageURL;
- (unsigned long long)imageType;
- (void).cxx_destruct;
- (void)setImageType:;
- (id)previewImageURL;
@end
