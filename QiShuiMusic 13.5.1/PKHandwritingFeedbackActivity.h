@interface PKHandwritingFeedbackActivity : UIActivity
@property (nonatomic) @? block;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
- (id)activityTitle;
- (id)block;
- (id)activityType;
- (void)setImage:;
- (void)setTitle:;
- (id)initWithBlock:;
- (id)title;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)image;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
@end
