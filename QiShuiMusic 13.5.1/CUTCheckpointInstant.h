@interface CUTCheckpointInstant : CUTCheckpointSignpost
@property (nonatomic) NSDate date;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (id)initWithName:uniqueIdentifier:;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (id)initWithDate:name:uniqueIdentifier:;
- (void)_touchDate;
- (void)mergeWithCheckpoint:;
@end
