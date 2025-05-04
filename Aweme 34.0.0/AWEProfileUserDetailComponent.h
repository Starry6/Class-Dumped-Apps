@interface AWEProfileUserDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL hasReportedVisit;
- (void)onDidRequestUser:error:;
- (void)reportUserDetailVisitIfNeeded:;
- (BOOL)hasReportedVisit;
- (void)setHasReportedVisit:;
@end
