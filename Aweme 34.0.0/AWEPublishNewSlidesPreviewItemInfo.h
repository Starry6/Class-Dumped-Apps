@interface AWEPublishNewSlidesPreviewItemInfo : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) UIImage thumbnailImage;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q type;
- (void)setIsSelected:;
- (id)thumbnailImage;
- (id)uuid;
- (void)setUuid:;
- (BOOL)isSelected;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setThumbnailImage:;
@end
