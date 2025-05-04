@interface AWECampaignTaskReportManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportTask:uniqueID:extra:completion:;
- (void)reportTask:taskID:uniqueID:host:path:extra:completion:;
- (void)trackLogWithKey:message:;
@end
