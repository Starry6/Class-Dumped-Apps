@interface BDUGLuckyActivityItem : BDUGLuckyJSONModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSString data;
@property (nonatomic) q versionId;
@property (nonatomic) NSNumber bk;
@property (nonatomic) NSString entryId;
@property (nonatomic) NSString cycleId;
- (id)entryId;
- (id)cycleId;
- (id)bk;
- (id)resourceId;
- (void)setBk:;
- (void)setCycleId:;
- (void)setEntryId:;
- (void)setResourceId:;
- (id)data;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void).cxx_destruct;
- (void)setData:;
- (long long)versionId;
- (void)setVersionId:;
@end
