@interface IDSQueryRateLimitedMetric : NSObject
@property (nonatomic) NSString topLevelService;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber timeSinceStart;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeSinceStart;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)count;
- (id)initWithTopLevelService:count:timeSinceStart:;
- (id)topLevelService;
@end
