@interface TimedBuffer : NSObject
@property (nonatomic) ^{__CVBuffer=} buffer;
@property (nonatomic) {?=qiIq} timestamp;
- (void)setBuffer:;
- (id)buffer;
- (void)setTimestamp:;
- (id)timestamp;
- (id)initWithBuffer:atTimestamp:;
@end
