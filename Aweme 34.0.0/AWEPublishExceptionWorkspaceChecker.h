@interface AWEPublishExceptionWorkspaceChecker : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWEPublishExceptionWorkspaceContext worksapceContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (void)checkWithPublishModel:context:completion:;
- (id)reportCustomParams;
- (void)setWorksapceContext:;
- (id)worksapceContext;
- (void).cxx_destruct;
@end
