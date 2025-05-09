@interface MTPageRenderMeasurement : MTPerfBaseMeasurement
@property (nonatomic) NSString pageId;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString pageContext;
@property (nonatomic) NSArray eventData;
@property (nonatomic) NSArray additionalFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString pageId;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString pageContext;
- (void)setXpSessionDuration:;
- (void)setXpSamplingForced:;
- (id)pageId;
- (void)mark:;
- (void)setPageId:;
- (void).cxx_destruct;
- (void)setPageType:;
- (id)pageType;
- (void)setXpSamplingPercentageUsers:;
- (void)setAppLaunch:;
- (id)pageContext;
- (void)setPageContext:;
- (void)setLaunchCorrelationKey:;
- (void)mark:time:;
- (void)mark:date:;
- (id)initWithMeasurementTransformer:pageId:pageType:pageContext:eventData:;
- (void)setPrimaryDataResponseCached:;
- (void)setPreloadStatus:;
@end
