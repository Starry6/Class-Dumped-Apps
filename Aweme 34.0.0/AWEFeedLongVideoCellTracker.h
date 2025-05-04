@interface AWEFeedLongVideoCellTracker : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString pageName;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)commonParams;
- (id)getRecType:;
- (void)trackVideoCardClick:;
- (void)trackVideoCardShow:;
- (void)trackLvTipShow:;
- (void)trackLvTipClick:;
- (void)traceEnterPersonalDetail:;
- (void)trackPayLvideoPlayTimeWithAweme:;
- (void)trackPayLvideoPaymentSuccessWithAweme:errorCode:errorType:extraParams:;
- (void).cxx_destruct;
- (id)pageName;
- (void)setPageName:;
@end
