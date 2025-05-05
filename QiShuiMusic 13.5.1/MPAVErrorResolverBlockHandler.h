@interface MPAVErrorResolverBlockHandler : NSObject
@property (nonatomic) MPAVErrorResolver errorResolver;
@property (nonatomic) @? resolutionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)errorResolver:didResolveError:withResolution:;
- (id)initWithErrorResolver:;
- (void)resolveError:;
- (id)errorResolver;
- (id)resolutionHandler;
- (void)setResolutionHandler:;
@end
