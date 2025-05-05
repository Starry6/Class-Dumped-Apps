@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
@property (nonatomic) ^{opaqueCMFormatDescription=} formatDescription;
@property (nonatomic) ^{OpaqueCMClock=} clock;
@property (nonatomic) NSInteger sourceSubType;
- (void)setClock:;
- (id)initWithXPCEncoding:;
- (id)formatDescription;
- (id)clock;
- (void)dealloc;
- (id)copyXPCEncoding;
- (void)setSourceSubType:;
- (id)description;
- (int)sourceSubType;
- (void)setFormatDescription:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
