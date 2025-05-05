@interface IDSDeliveryControllerTimeMetric : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) S rtcType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) double timeToSend;
@property (nonatomic) q endpointCount;
@property (nonatomic) BOOL usedPipeline;
@property (nonatomic) BOOL usedMMCS;
@property (nonatomic) q responseCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned short)rtcType;
- (long long)responseCode;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithStartDate:endDate:endpointCount:usedPipeline:usedMMCS:responseCode:;
- (double)timeToSend;
- (long long)endpointCount;
- (BOOL)usedPipeline;
- (BOOL)usedMMCS;
@end
