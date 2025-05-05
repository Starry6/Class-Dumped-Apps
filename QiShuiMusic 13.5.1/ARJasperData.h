@interface ARJasperData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) ^{__CVBuffer=} dataBuffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setTimestamp:;
- (double)timestamp;
- (id)dataBuffer;
- (id)initWithBuffer:timestamp:;
- (void)setDataBuffer:;
@end
