@interface EKEventOccurrenceInfo : NSObject
@property (nonatomic) EKObjectID objectID;
@property (nonatomic) double date;
- (id)objectID;
- (void)setObjectID:;
- (double)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (id)initWithObjectID:date:;
@end
