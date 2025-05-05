@interface VISearchResult : NSObject
@property (nonatomic) NSArray regionOfInterestResults;
@property (nonatomic) NSData userFeedbackPayload;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)regionOfInterestResults;
- (id)userFeedbackPayload;
- (id)initWithRegionOfInterestResults:;
- (id)initWithRegionOfInterestResults:userFeedbackPayload:;
+ (id)empty;
@end
