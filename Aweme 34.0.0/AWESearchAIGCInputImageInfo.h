@interface AWESearchAIGCInputImageInfo : NSObject
@property (nonatomic) UIImage currentSelectedImage;
@property (nonatomic) NSString selectedImageTosID;
@property (nonatomic) NSArray selectedImageUrlList;
@property (nonatomic) Q uploadStatus;
@property (nonatomic) NSString searchSource;
- (id)currentSelectedImage;
- (void)setSelectedImageUrlList:;
- (void)setSelectedImageTosID:;
- (void)setCurrentSelectedImage:;
- (id)selectedImageTosID;
- (id)selectedImageUrlList;
- (void).cxx_destruct;
- (void)reset;
- (id)searchSource;
- (void)setSearchSource:;
- (void)setUploadStatus:;
- (unsigned long long)uploadStatus;
@end
