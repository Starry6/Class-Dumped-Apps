@interface AWEIMWidgetTrackContextModel : NSObject
@property (nonatomic) NSString fromWidget;
@property (nonatomic) NSString widgetSize;
@property (nonatomic) NSString toUserId;
@property (nonatomic) NSString streakStatus;
@property (nonatomic) NSString streakMonsterStatus;
- (id)toUserId;
- (void)setToUserId:;
- (id)fromWidget;
- (void)setFromWidget:;
- (id)streakStatus;
- (void)setStreakStatus:;
- (id)streakMonsterStatus;
- (void)setStreakMonsterStatus:;
- (void)setWidgetSize:;
- (id)widgetSize;
- (void).cxx_destruct;
@end
