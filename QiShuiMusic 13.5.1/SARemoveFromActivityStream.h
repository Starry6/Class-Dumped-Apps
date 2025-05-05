@interface SARemoveFromActivityStream : SABaseClientBoundCommand
@property (nonatomic) NSString activityType;
@property (nonatomic) NSDate fromDate;
@property (nonatomic) NSString streamType;
@property (nonatomic) NSString taskType;
@property (nonatomic) NSDate toDate;
@property (nonatomic) NSString visibility;
- (id)activityType;
- (void)setActivityType:;
- (void)setFromDate:;
- (id)groupIdentifier;
- (void)setVisibility:;
- (id)visibility;
- (id)taskType;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setToDate:;
- (id)fromDate;
- (id)streamType;
- (id)toDate;
- (void)setTaskType:;
- (void)setStreamType:;
+ (id)removeFromActivityStream;
+ (id)removeFromActivityStreamWithDictionary:context:;
@end
