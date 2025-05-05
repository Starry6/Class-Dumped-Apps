@interface JEHLSItem : NSObject
@property (nonatomic) Q startOverallPosition;
@property (nonatomic) Q startPosition;
@property (nonatomic) NSArray eventData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)compare:;
- (void).cxx_destruct;
- (id)eventData;
- (unsigned long long)startPosition;
- (void)setStartPosition:;
- (void)setEventData:;
- (unsigned long long)startOverallPosition;
- (id)initWithStartOverallPosition:metricsData:;
- (void)setStartOverallPosition:;
+ (id)comparator;
@end
