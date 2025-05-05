@interface IESLiveIntercomCommentConfig : NSObject
@property (nonatomic) Q intercomStatus;
@property (nonatomic) q initiativeCloseIntercomCount;
@property (nonatomic) double intercomStartTime;
@property (nonatomic) BOOL hasTrackShow;
- (BOOL)hasTrackShow;
- (long long)initiativeCloseIntercomCount;
- (double)intercomStartTime;
- (unsigned long long)intercomStatus;
- (void)setHasTrackShow:;
- (void)setInitiativeCloseIntercomCount:;
- (void)setIntercomStartTime:;
- (void)setIntercomStatus:;
@end
