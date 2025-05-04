@interface AWEPublishExceptionFailChecker : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) AWEPublishExceptionFailContext failContext;
@property (nonatomic) NSDictionary featureParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (id)featureParams;
- (void)setPublishModel:;
- (void)checkWithPublishModel:context:completion:;
- (id)reportCustomParams;
- (void)setFailContext:;
- (id)failContext;
- (void)setFeatureParams:;
- (void).cxx_destruct;
@end
