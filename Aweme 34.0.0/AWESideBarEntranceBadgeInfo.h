@interface AWESideBarEntranceBadgeInfo : NSObject
@property (nonatomic) q badgeStyle;
@property (nonatomic) q badgeNumber;
@property (nonatomic) BOOL isForbiddenByLottie;
@property (nonatomic) NSString recentDisplayBadgeComponentID;
@property (nonatomic) NSDictionary bizTrackParams;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (id)recentDisplayBadgeComponentID;
- (BOOL)isForbiddenByLottie;
- (void)setIsForbiddenByLottie:;
- (void)setRecentDisplayBadgeComponentID:;
- (long long)badgeNumber;
- (id)description;
- (void).cxx_destruct;
- (void)setBadgeNumber:;
- (long long)badgeStyle;
- (void)setBadgeStyle:;
@end
