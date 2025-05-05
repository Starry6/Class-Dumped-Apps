@interface IESECLLSingleComponentBuilder : IESECLLContainerBuilder
@property (nonatomic) IESECLLLayoutableBuilder associatedBuilder;
- (id)associatedBuilder;
- (id)initWithAssociatedBuilderType:;
@end
