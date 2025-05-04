@interface AWEMRAlertMigrateTrackTask : NSObject
@property (nonatomic) <AWEAlertContextTrackProtocol> alertContext;
@property (nonatomic) double shownStamp;
@property (nonatomic) NSString taskName;
- (id)alertContext;
- (void)setAlertContext:;
- (double)shownStamp;
- (void)setShownStamp:;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
@end
