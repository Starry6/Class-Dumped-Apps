@interface MNAnnouncementConflict : NSObject
@property (nonatomic) MNAnnouncementPlanEvent firstEvent;
@property (nonatomic) MNAnnouncementPlanEvent secondEvent;
@property (nonatomic) double timeGap;
@property (nonatomic) double desiredTimeGap;
@property (nonatomic) BOOL announcementsAreSimilar;
- (void).cxx_destruct;
- (id)description;
- (id)firstEvent;
- (void)setFirstEvent:;
- (id)secondEvent;
- (void)setSecondEvent:;
- (double)timeGap;
- (void)setTimeGap:;
- (double)desiredTimeGap;
- (void)setDesiredTimeGap:;
- (BOOL)announcementsAreSimilar;
- (void)setAnnouncementsAreSimilar:;
@end
