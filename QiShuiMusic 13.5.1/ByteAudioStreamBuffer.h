@interface ByteAudioStreamBuffer : NSObject
@property (nonatomic) * data;
@property (nonatomic) NSInteger length;
@property (nonatomic) I timestamp;
@property (nonatomic) ByteAudioStreamFormat streamFormat;
- (void)initWithComponents:format:;
- (unsigned int)getTimeStamp;
- (id)getStreamFormat;
- (void)setStreamFormat:;
- (char *)data;
- (void)setTimestamp:;
- (unsigned int)timestamp;
- (void)setData:;
- (int)length;
- (void)setLength:;
- (id)streamFormat;
- (int)getLength;
@end
