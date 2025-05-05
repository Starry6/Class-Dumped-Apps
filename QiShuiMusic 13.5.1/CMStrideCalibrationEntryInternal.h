@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry
@property (nonatomic) I pacebin;
@property (nonatomic) double kvalue;
@property (nonatomic) double kvalueTrack;
@property (nonatomic) double score;
@property (nonatomic) NSInteger session;
- (double)score;
- (int)session;
- (id)description;
- (unsigned int)pacebin;
- (double)kvalue;
- (double)kvalueTrack;
@end
