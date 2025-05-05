@interface VCTextStreamConfig : VCMediaStreamConfig
@property (nonatomic) BOOL redEnabled;
@property (nonatomic) C numRedundantPayloads;
@property (nonatomic) float txIntervalMin;
- (void)setTxIntervalMin:;
- (void)setNumRedundantPayloads:;
- (id)initWithClientDictionary:;
- (BOOL)isRedEnabled;
- (BOOL)setupCodecWithClientDictionary:;
- (unsigned char)numRedundantPayloads;
- (float)txIntervalMin;
@end
