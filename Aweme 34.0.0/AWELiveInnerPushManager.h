@interface AWELiveInnerPushManager : NSObject
@property (nonatomic) Q showTimesInThisColdLaunch;
@property (nonatomic) NSDate livePushPrevShowTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentTopPage;
- (id)enterFrom:;
- (void)setLivePushPrevShowTime:;
- (unsigned long long)showTimesInThisColdLaunch;
- (void)setShowTimesInThisColdLaunch:;
- (void)trackLivePushAbandonWithRoomID:anchorID:abandonReson:;
- (id)livePushPrevShowTime;
- (id)getURLQueryValueWithURL:queryKey:;
- (BOOL)canShowFollowAnchorPushNotice;
- (id)enterMethod:;
- (id)pushSource:;
- (id)requestPage:;
- (id)pushType:;
- (void).cxx_destruct;
+ (id)sharedInnerPushManager;
@end
