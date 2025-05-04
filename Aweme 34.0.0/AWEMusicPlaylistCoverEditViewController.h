@interface AWEMusicPlaylistCoverEditViewController : TOCropViewController
@property (nonatomic) @? completionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cropViewController:didCropToImage:withRect:angle:button:;
- (void)cropViewController:didFinishCancelled:;
- (long long)croppingStyle;
- (id)frameForCropViewWithVerticalLayout:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupUI;
@end
