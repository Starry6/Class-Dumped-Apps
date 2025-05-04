@interface AWEPostPageBaseServiceContainer : IESStaticContainer
@property (nonatomic) AWEPostPageBaseServiceContainer relatedServiceContainer;
- (id)resolveObject:;
- (id)superResolveObject:;
- (id)relatedServiceContainer;
- (void)setRelatedServiceContainer:;
- (void).cxx_destruct;
@end
