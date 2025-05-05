@interface CHTimeWindowStrokeGroup : CHStrokeGroup
@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
- (double)endTimestamp;
- (double)startTimestamp;
- (id)initWithStrokeIdentifiers:firstStrokeIdentifier:lastStrokeIdentifier:bounds:startTimestamp:endTimestamp:;
- (id)groupByAddingStrokeIdentifiers:removingStrokeIdentifiers:firstStrokeIdentifier:lastStrokeIdentifier:bounds:startTimestamp:endTimestamp:;
@end
