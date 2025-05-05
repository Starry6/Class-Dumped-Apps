@interface ARMattingImageMetaData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ^{__CVBuffer=} downSampledImageBuffer;
@property (nonatomic) ^{__CVBuffer=} mattingScaleImageBuffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (double)timestamp;
- (id)description;
- (id)initWithTimestamp:downSampledImageBuffer:mattingScaleImageBuffer:;
- (id)downSampledImageBuffer;
- (id)mattingScaleImageBuffer;
@end
