@interface IESLiveSaaSPBLiveEcomGeneralMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSString contentFormat;
@property (nonatomic) q logicClock;
@property (nonatomic) IESLiveSaaSPBTraceTimeMetricV2 traceTimeMetric;
@property (nonatomic) BOOL hasTraceTimeMetric;
@property (nonatomic) NSData data_p;
+ (id)descriptor;
@end
