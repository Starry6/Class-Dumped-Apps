@interface SHSheetTestActivity : UIActivity
@property (nonatomic) NSArray activityItems;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (id)activityItems;
- (void)prepareWithActivityItems:;
- (void)setActivityItems:;
+ (long long)activityCategory;
@end
