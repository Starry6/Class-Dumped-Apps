@interface AWEPlayInteractionDislikeBottomNotificationManager : NSObject
@property (nonatomic) NSDictionary trackExtra;
@property (nonatomic) BOOL disableToast;
@property (nonatomic) NSString disableToastShowAwemeID;
@property (nonatomic) DUXBottomNotification bottomNotification;
- (id)bottomNotification;
- (void)setBottomNotification:;
- (id)trackExtra;
- (void)setTrackExtra:;
- (void)showBubbleWithConfig:;
- (void)dislikeToastOnVC:awemeModel:trackExtra:dismissWhenClick:clicked:;
- (void)showWithdrawGuideToastOnVC:awemeModel:trackExtra:;
- (void)removeDislikeToastWithAweme:;
- (BOOL)disableToast;
- (void)setDisableToast:;
- (void)showBubbleWithToast:awemeModel:onVC:autoDismissTime:buttonText:buttonActionSchema:;
- (void)setDisableToastShowAwemeID:;
- (id)createBottomNotification:dismiss:;
- (id)disableToastShowAwemeID;
- (void)dislikeToastOnVC:awemeModel:trackExtra:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
