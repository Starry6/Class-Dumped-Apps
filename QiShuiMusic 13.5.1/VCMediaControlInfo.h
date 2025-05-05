@interface VCMediaControlInfo : NSObject
@property (nonatomic) Q serializedSize;
@property (nonatomic) <VCMediaControlInfoDelegate> delegate;
@property (nonatomic) C version;
@property (nonatomic) C fecFeedbackVersion;
- (void)setVersion:;
- (void)dispose;
- (unsigned char)version;
- (void)setDelegate:;
- (id)delegate;
- (void)invalidate;
- (unsigned long long)serializedSize;
- (unsigned char)fecFeedbackVersion;
- (void)setFecFeedbackVersion:;
- (id)initWithBuffer:length:optionalControlInfo:version:;
- (int)configureWithBuffer:length:optionalControlInfo:;
- (int)setInfo:size:type:;
- (int)setInfoUnserialized:type:;
- (BOOL)hasInfoType:;
- (int)getInfo:bufferLength:infoSize:type:;
- (int)getInfoUnserialized:type:;
- (int)serializeToBuffer:bufferLength:blobLength:;
@end
