@interface CUTCheckpointRange : CUTCheckpointSignpost
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) BOOL ordered;
- (void)setOrdered:;
- (id)startDate;
- (BOOL)isOrdered;
- (void)setStartDate:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:uniqueIdentifier:;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (void)mergeWithCheckpoint:;
- (id)initWithStartDate:endDate:name:uniqueIdentifier:;
- (void)_touchStartDate;
- (void)_touchEndDate;
@end
