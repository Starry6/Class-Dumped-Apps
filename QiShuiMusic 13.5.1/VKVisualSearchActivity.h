@interface VKVisualSearchActivity : UIActivity
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) UIViewController presentingViewController;
@property (nonatomic) ^{CGImage=} imageToProcess;
- (id)activityTitle;
- (id)presentingViewController;
- (id)activityType;
- (void)setPresentingViewController:;
- (void)setImage:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)image;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (id)initWithImage:presentingViewController:;
- (id)imageToProcess;
- (void)setImageToProcess:;
@end
