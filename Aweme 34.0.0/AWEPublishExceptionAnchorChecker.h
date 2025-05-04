@interface AWEPublishExceptionAnchorChecker : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWEPublishExceptionAnchorContext anchorContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (id)anchorContext;
- (void)setAnchorContext:;
- (void)checkWithPublishModel:context:completion:;
- (id)reportCustomParams;
- (void).cxx_destruct;
@end
