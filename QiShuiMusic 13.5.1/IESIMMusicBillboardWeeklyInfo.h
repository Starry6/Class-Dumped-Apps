@interface IESIMMusicBillboardWeeklyInfo : IESIMBaseApiModel
@property (nonatomic) NSString billboardID;
@property (nonatomic) q billboardEditionNumber;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
- (void)setBillboardID:;
- (long long)billboardEditionNumber;
- (id)billboardID;
- (void)setBillboardEditionNumber:;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
