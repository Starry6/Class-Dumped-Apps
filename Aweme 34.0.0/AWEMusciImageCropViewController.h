@interface AWEMusciImageCropViewController : TOCropViewController
@property (nonatomic) @? completionBlock;
@property (nonatomic) q maxFileSize;
@property (nonatomic) q minWidth;
@property (nonatomic) q minHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cropViewController:didCropToImage:withRect:angle:button:;
- (void)cropViewController:didFinishCancelled:;
- (id)frameForCropViewWithVerticalLayout:;
- (BOOL)isSatisfyImageSizeWithImage:;
- (long long)maxFileSize;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)viewDidLoad;
- (long long)minWidth;
- (void).cxx_destruct;
- (void)setMinWidth:;
- (void)setMinHeight:;
- (long long)minHeight;
- (void)setupUI;
- (void)setMaxFileSize:;
@end
