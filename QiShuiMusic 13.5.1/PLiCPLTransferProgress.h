@interface PLiCPLTransferProgress : NSObject
@property (nonatomic) Q notUploadedPhotosCount;
@property (nonatomic) Q notUploadedVideosCount;
@property (nonatomic) Q notUploadedItemsCount;
- (id)description;
- (unsigned long long)notUploadedPhotosCount;
- (void)setNotUploadedPhotosCount:;
- (unsigned long long)notUploadedVideosCount;
- (void)setNotUploadedVideosCount:;
- (unsigned long long)notUploadedItemsCount;
- (void)setNotUploadedItemsCount:;
@end
