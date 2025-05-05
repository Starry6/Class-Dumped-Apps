@interface SAMICore_TtsResult : NSObject
@property (nonatomic) float duration;
@property (nonatomic) NSString phonemeAlignment;
@property (nonatomic) NSString wordAlignment;
@property (nonatomic) NSData data;
@property (nonatomic) NSInteger dataLength;
- (id)phonemeAlignment;
- (void)setPhonemeAlignment:;
- (void)setWordAlignment:;
- (id)wordAlignment;
- (void)setDataLength:;
- (int)dataLength;
- (id)data;
- (void)setDuration:;
- (void)setData:;
- (float)duration;
@end
