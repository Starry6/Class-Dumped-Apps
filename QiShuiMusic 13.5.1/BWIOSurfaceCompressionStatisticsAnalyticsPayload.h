@interface BWIOSurfaceCompressionStatisticsAnalyticsPayload : NSObject
@property (nonatomic) float averageRatio;
@property (nonatomic) float minRatio;
@property (nonatomic) float maxRatio;
@property (nonatomic) float standardDeviation;
@property (nonatomic) NSInteger compressionType;
@property (nonatomic) I bufferHeight;
@property (nonatomic) I numberOfSamples;
@property (nonatomic) Q totalCompressedSize;
@property (nonatomic) Q totalUncompressedSize;
@property (nonatomic) NSInteger nodeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)nodeType;
- (unsigned int)numberOfSamples;
- (id)eventName;
- (void)setStandardDeviation:;
- (void)reset;
- (int)compressionType;
- (void)setCompressionType:;
- (float)standardDeviation;
- (id)eventDictionary;
- (void)setNumberOfSamples:;
- (float)averageRatio;
- (void)setAverageRatio:;
- (float)minRatio;
- (void)setMinRatio:;
- (float)maxRatio;
- (void)setMaxRatio:;
- (unsigned int)bufferHeight;
- (void)setBufferHeight:;
- (unsigned long long)totalCompressedSize;
- (void)setTotalCompressedSize:;
- (unsigned long long)totalUncompressedSize;
- (void)setTotalUncompressedSize:;
- (void)setNodeType:;
@end
