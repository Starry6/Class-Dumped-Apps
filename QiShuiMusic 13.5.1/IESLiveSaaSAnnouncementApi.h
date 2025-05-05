@interface IESLiveSaaSAnnouncementApi : HTSLiveApi
- (void)changeSubscribeState:anchorOpenId:isFromAnnouncement:completion:;
- (void)fetchAnnouncementInfoWithCompletion:;
- (void)fetchAnnouncementInfoWithCompletion:isFromAnnouncement:;
- (void)queryAnchorOpenId:isFromAnnouncement:completion:;
@end
