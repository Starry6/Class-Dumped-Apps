@interface SIOrderedEventInternal : NSObject
@property (nonatomic) SILogicalTimestampInternal logicalTimestamp;
@property (nonatomic) SISchemaTopLevelUnionType tluEvent;
- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)logicalTimestamp;
- (id)tluEvent;
- (id)initWithLogicalTimestamp:tluEvent:;
+ (id)deserializeFrom:;
@end
