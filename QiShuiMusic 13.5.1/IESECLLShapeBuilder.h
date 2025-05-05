@interface IESECLLShapeBuilder : IESECLLLayoutableBuilder
@property (nonatomic) @? width;
@property (nonatomic) @? height;
@property (nonatomic) @? stroke;
- (id)cxxObject;
- (void)inflateSubviewsIntoMap:;
- (id)height;
- (id)width;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setupShapeLayer;
- (id)stroke;
@end
