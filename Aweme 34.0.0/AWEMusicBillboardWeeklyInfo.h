@interface AWEMusicBillboardWeeklyInfo : AWEBaseApiModel
@property (nonatomic) NSString billboardID;
@property (nonatomic) q billboardEditionNumber;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
- (void)setBillboardID:;
- (void)setBillboardEditionNumber:;
- (id)billboardID;
- (long long)billboardEditionNumber;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
