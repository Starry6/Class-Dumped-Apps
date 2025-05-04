@interface AWEACCImageAlbumPickerControllerWrap : NSObject
@property (nonatomic) <AWEImageAlbumImagePickerViewControllerProtocol> controller;
@property (nonatomic) AWEACCImageAlbumPickerDelegateMiddleMan middleMan;
@property (nonatomic) <ACCImageAlbumPickerControllerWrapDelegate> delegate;
@property (nonatomic) BOOL isSlides;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isSlides;
- (void)setIsSlides:;
- (void)didSelectSaveImageAtindex:;
- (void)setMiddleMan:;
- (id)middleMan;
- (void)showImageAlbumImagePickViewWithDataSource:enterFrom:completionBlock:;
- (void)setController:;
- (void)dismissAnimated:;
- (id)delegate;
- (void).cxx_destruct;
- (id)controller;
- (void)setDelegate:;
@end
