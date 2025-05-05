@interface IESECLLTextBuilder : IESECLLLayoutableBuilder
@property (nonatomic) @? bold;
@property (nonatomic) @? font;
- (id)cxxObject;
- (void)inflateSubviewsIntoMap:;
- (id)initWithIdentifier:text:;
- (void).cxx_destruct;
- (id)font;
- (id)bold;
@end
