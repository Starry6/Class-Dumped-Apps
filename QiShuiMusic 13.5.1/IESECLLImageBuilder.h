@interface IESECLLImageBuilder : IESECLLLayoutableBuilder
@property (nonatomic) @? resizable;
@property (nonatomic) @? aspectRatio;
@property (nonatomic) @? width;
@property (nonatomic) @? height;
- (id)cxxObject;
- (void)inflateSubviewsIntoMap:;
- (id)initWithIdentifier:withImage:;
- (id)resizable;
- (id)aspectRatio;
- (id)height;
- (id)width;
- (void).cxx_destruct;
@end
