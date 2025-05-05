@interface MOVStreamFrame : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) double timeStamp;
@property (nonatomic) {?=qiIq} cmTimeStamp;
@property (nonatomic) @ context;
- (void)dealloc;
- (id)context;
- (id)pixelBuffer;
- (void).cxx_destruct;
- (id)description;
- (double)timeStamp;
- (id)initWithPixelBuffer:timeStamp:context:;
- (id)cmTimeStamp;
@end
