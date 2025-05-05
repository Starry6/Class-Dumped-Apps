@interface IMDTaskProgress : NSObject
@property (nonatomic) NSString taskName;
@property (nonatomic) Q totalCount;
- (void)dealloc;
- (unsigned long long)totalCount;
- (id)taskName;
- (id)initWithTaskName:totalCount:;
- (void)startTrackingTime;
- (void)updateWithCompletedCount:;
@end
