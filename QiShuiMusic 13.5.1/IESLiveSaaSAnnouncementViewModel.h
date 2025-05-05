@interface IESLiveSaaSAnnouncementViewModel : NSObject
@property (nonatomic) IESLiveSaaSAnnouncementApi announcementApi;
@property (nonatomic) IESLiveSaaSAnnouncementAnchorGetResponse originAnnouncement;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) Q panelStyle;
- (id)announcementApi;
- (id)editValidationString;
- (id)enterFrom;
- (void)openLivePage;
- (id)originAnnouncement;
- (unsigned long long)panelStyle;
- (void)refreshAnnouncementInfoAsyncWithCompletion:;
- (void)setAnnouncementApi:;
- (void)setEnterFrom:;
- (void)setOriginAnnouncement:;
- (void)setPanelStyle:;
- (void)setTrackContext:;
- (void)trackAnnouncePenalizeShow;
- (void)trackAnnounceSettingCellTap;
- (void)trackAnnounceSettingShow;
- (id)trackContext;
- (id)init;
- (void).cxx_destruct;
@end
