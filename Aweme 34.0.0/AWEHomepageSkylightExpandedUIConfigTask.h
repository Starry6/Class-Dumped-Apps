@interface AWEHomepageSkylightExpandedUIConfigTask : NSObject
@property (nonatomic) AWEHPSkylightUIConfig expandedUIConfig;
@property (nonatomic) BOOL animate;
@property (nonatomic) @? completionBlock;
- (id)expandedUIConfig;
- (void)setExpandedUIConfig:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (BOOL)animate;
- (void).cxx_destruct;
- (void)setAnimate:;
@end
