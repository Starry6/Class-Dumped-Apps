@interface IESMMCodecConfiguration : NSObject
@property (nonatomic) I codecType;
- (id)getCodecConfigKey;
- (id)initWithCFDataRef:;
- (unsigned int)codecType;
- (void)setCodecType:;
@end
