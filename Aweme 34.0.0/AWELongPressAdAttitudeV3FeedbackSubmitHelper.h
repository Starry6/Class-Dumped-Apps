@interface AWELongPressAdAttitudeV3FeedbackSubmitHelper : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) BOOL dislike;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)didEndDisplayingCellWithContext:;
- (void)refreshTableViewController:;
- (void)likeAweme:;
- (void)dislikeAweme:;
- (void)UIApplicationWillTerminate:;
- (void)setDislike:;
- (void)feedbackSubmit;
- (unsigned long long)moduleNames;
- (BOOL)dislike;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedInstance;
@end
