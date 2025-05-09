@interface WK_RTCVideoEncoderSettings : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) S width;
@property (nonatomic) S height;
@property (nonatomic) I startBitrate;
@property (nonatomic) I maxBitrate;
@property (nonatomic) I minBitrate;
@property (nonatomic) I maxFramerate;
@property (nonatomic) I qpMax;
@property (nonatomic) Q mode;
- (void)setName:;
- (void)setWidth:;
- (unsigned short)height;
- (unsigned short)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)mode;
- (void)setMode:;
- (unsigned int)maxBitrate;
- (void)setMaxBitrate:;
- (unsigned int)maxFramerate;
- (void)setMaxFramerate:;
- (unsigned int)minBitrate;
- (id)initWithNativeVideoCodec:;
- (id)nativeVideoCodec;
- (unsigned int)startBitrate;
- (void)setStartBitrate:;
- (void)setMinBitrate:;
- (unsigned int)qpMax;
- (void)setQpMax:;
@end
