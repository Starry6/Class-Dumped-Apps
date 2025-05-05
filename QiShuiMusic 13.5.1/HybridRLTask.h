@interface HybridRLTask : NSObject
@property (nonatomic) HybridRLPipeline loaderPipeline;
@property (nonatomic) NSString url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loaderPipeline;
- (void)setLoaderPipeline:;
- (id)url;
- (void)dealloc;
- (void)setUrl:;
- (void).cxx_destruct;
- (BOOL)cancelTask;
@end
