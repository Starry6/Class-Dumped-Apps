@interface VEEffectImage : IESMMObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger stride;
@property (nonatomic) Q format;
@property (nonatomic) Q orientation;
- (id)initWithEffectImage:;
- (void)setFormat:;
- (void)dealloc;
- (unsigned long long)format;
- (unsigned long long)orientation;
- (void)setWidth:;
- (int)stride;
- (int)height;
- (int)width;
- (void)setHeight:;
- (id)getData;
- (void)setStride:;
- (void)setOrientation:;
- (id)getImage;
@end
