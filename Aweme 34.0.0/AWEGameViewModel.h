@interface AWEGameViewModel : NSObject
@property (nonatomic) AWEGameModel model;
@property (nonatomic) UIColor badgeColor;
@property (nonatomic) <AWEIronManService> ironManService;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) BOOL showBadge;
@property (nonatomic) NSString badge;
@property (nonatomic) NSString sectionName;
- (id)coverUrl;
- (id)ironManService;
- (void)setIronManService:;
- (id)ironManScene;
- (void)jumpToGamePage;
- (id)ironManAppID;
- (id)ironManAppName;
- (id)ironManBdpLog;
- (void)setModel:;
- (void)setBadgeColor:;
- (id)initWithModel:;
- (id)badgeColor;
- (id)subTitle;
- (id)model;
- (id)badge;
- (void).cxx_destruct;
- (id)title;
- (void)setSectionName:;
- (id)sectionName;
- (BOOL)showBadge;
@end
