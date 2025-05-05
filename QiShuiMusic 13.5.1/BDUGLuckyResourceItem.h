@interface BDUGLuckyResourceItem : BDUGLuckyBDModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSString cycleId;
@property (nonatomic) NSString data;
@property (nonatomic) q versionId;
@property (nonatomic) NSNumber bk;
@property (nonatomic) BOOL isDisable;
- (id)cycleId;
- (id)bk;
- (void)copyResourceItemDataFrom:;
- (BOOL)isDisable;
- (id)resourceId;
- (void)setBk:;
- (void)setCycleId:;
- (void)setIsDisable:;
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
+ (id)modelCustomPropertyMapper;
@end
