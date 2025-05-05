@interface ISIconDecorationResource : NSObject
@property (nonatomic) <ISScalableCompositorResource> internalResource;
@property (nonatomic) ISIconDecoration decoration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)imageForSize:scale:;
- (id)initWithDecoration:;
- (void)configureWithType:;
- (id)decoration;
- (id)internalResource;
@end
