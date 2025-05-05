@interface MDLCheckerboardTexture : MDLTexture
@property (nonatomic) float divisions;
@property (nonatomic) ^{CGColor=} color1;
@property (nonatomic) ^{CGColor=} color2;
- (void)dealloc;
- (id)color1;
- (void)setColor1:;
- (id)color2;
- (void)setColor2:;
- (id)generateDataAtLevel:selector:;
- (void)setDivisions:;
- (float)divisions;
- (id)initWithDivisions:name:dimensions:channelCount:channelEncoding:color1:color2:;
@end
