@interface MFBase64Decoder : MFBaseFilterDataConsumer
@property (nonatomic) BOOL convertCommas;
@property (nonatomic) BOOL isBound;
@property (nonatomic) Q unconverted;
- (long long)appendData:;
- (id)initWithConsumers:;
- (void).cxx_destruct;
- (void)done;
- (BOOL)isBound;
- (void)setIsBound:;
- (unsigned long long)_decodeBytes:end:into:length:startingAt:outEncodedOffset:;
- (void)setConvertCommas:;
- (BOOL)convertCommas;
- (unsigned long long)unconverted;
+ (BOOL)isValidBase64:;
@end
