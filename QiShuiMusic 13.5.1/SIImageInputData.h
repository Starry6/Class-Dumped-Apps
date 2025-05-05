@interface SIImageInputData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ^{__CVBuffer=} inputImageBuffer;
@property (nonatomic) ^{__CVBuffer=} inputDepthBuffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setInputImageBuffer:;
- (id)inputImageBuffer;
- (void)setInputDepthBuffer:;
- (id)inputDepthBuffer;
@end
