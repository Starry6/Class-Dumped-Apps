@interface LynxPerformance : NSObject
@property (nonatomic) BOOL hasActualFMP;
@property (nonatomic) double actualFMPDuration;
@property (nonatomic) double actualFirstScreenEndTimeStamp;
- (double)actualFMPDuration;
- (double)actualFirstScreenEndTimeStamp;
- (BOOL)hasActualFMP;
- (id)initWithPerformance:url:pageType:reactVersion:;
- (id)toDictionary;
- (void).cxx_destruct;
+ (id)toPerfStampKey:;
+ (id)toPerfKey:;
+ (id)toPerfKey:isSsrHydrate:;
@end
