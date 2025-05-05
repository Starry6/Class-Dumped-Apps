@interface SAMICore_BinaryContextCreateParameter : NSObject
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger maxBlockSize;
@property (nonatomic) NSInteger numChannel;
@property (nonatomic) q type;
@property (nonatomic) ^v data;
@property (nonatomic) NSInteger dataLen;
- (int)maxBlockSize;
- (int)numChannel;
- (void)setDataLen:;
- (void)setMaxBlockSize:;
- (void)setNumChannel:;
- (id)data;
- (int)sampleRate;
- (void)setType:;
- (long long)type;
- (void)setData:;
- (int)dataLen;
- (void)setSampleRate:;
@end
