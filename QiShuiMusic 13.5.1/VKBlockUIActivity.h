@interface VKBlockUIActivity : UIActivity
@property (nonatomic) @? block;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString type;
- (id)activityTitle;
- (id)block;
- (id)activityType;
- (id)init;
- (void)setType:;
- (void)setImage:;
- (void)setTitle:;
- (id)initWithBlock:;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)initWithTitle:block:;
- (id)image;
- (id)activityImage;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (id)initWithTitle:systemImageName:activityType:block:;
- (id)initWithTitle:image:block:;
- (id)initWithTitle:systemImageName:block:;
- (id)initWithTitle:image:activityType:block:;
@end
