@interface BWIOSurfaceCompressionHistogramAnalyticsPayload : NSObject
@property (nonatomic) NSString portType;
@property (nonatomic) I bufferHeight;
@property (nonatomic) NSInteger nodeType;
@property (nonatomic) BOOL pixelFormatIsTenBit;
@property (nonatomic) I numberOfSamples;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)portType;
- (void)dealloc;
- (void)setPortType:;
- (int)nodeType;
- (BOOL)pixelFormatIsTenBit;
- (unsigned int)numberOfSamples;
- (id)eventName;
- (void)setPixelFormatIsTenBit:;
- (void)reset;
- (id)eventDictionary;
- (void)setNumberOfSamples:;
- (unsigned int)bufferHeight;
- (void)setBufferHeight:;
- (void)setNodeType:;
- (void)setLumaCompressionHistogram:;
- (void)setChromaCompressionHistogram:;
@end
