@interface CMStrideCalibrationEntry : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double distance;
@property (nonatomic) NSInteger steps;
@property (nonatomic) double speed;
@property (nonatomic) double percentGrade;
@property (nonatomic) q gpsSource;
- (int)steps;
- (double)distance;
- (double)score;
- (id)initWithCoder:;
- (double)startTime;
- (double)speed;
- (double)endTime;
- (void)encodeWithCoder:;
- (int)session;
- (id)description;
- (id)copyWithZone:;
- (id)initWithCLStrideCalEntry:;
- (unsigned int)pacebin;
- (double)kvalue;
- (double)kvalueTrack;
- (double)percentGrade;
- (long long)gpsSource;
+ (BOOL)supportsSecureCoding;
@end
