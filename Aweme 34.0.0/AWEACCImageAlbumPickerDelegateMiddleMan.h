@interface AWEACCImageAlbumPickerDelegateMiddleMan : NSObject
@property (nonatomic) <ACCAWEImageAlbumImagePickerViewDataSource> originDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOriginDelegate:;
- (id)originDelegate;
- (long long)numberOfImagesForAlbumImagePicker;
- (id)cachedImageForIndex:;
- (id)itemExtraInfoForIndex:;
- (void)fetchImageForIndex:size:completionBlock:;
- (void).cxx_destruct;
@end
