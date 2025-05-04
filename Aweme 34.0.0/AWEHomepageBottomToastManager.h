@interface AWEHomepageBottomToastManager : NSObject
@property (nonatomic) NSArray homepageBottomToast;
@property (nonatomic) NSString userID;
- (BOOL)shouldShowToast;
- (id)homepageBottomToast;
- (void)setHomepageBottomToast:;
- (id)preferredHomepageBottomToast;
- (id)latestShowDateKey:;
- (id)showedTypeCountKey:;
- (id)showedCountKey:;
- (void)updateLatestStatus:;
- (id)userID;
- (id)initWithUser:;
- (void).cxx_destruct;
- (void)setUserID:;
@end
