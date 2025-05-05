@interface CPLIgnoredRecord : NSObject
@property (nonatomic) CPLRecordChange record;
@property (nonatomic) NSDate ignoredDate;
- (id)record;
- (void).cxx_destruct;
- (id)initWithRecord:ignoredDate:;
- (id)ignoredDate;
@end
