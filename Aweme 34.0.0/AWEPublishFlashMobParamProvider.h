@interface AWEPublishFlashMobParamProvider : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsForPublish:publishModel:;
- (id)paramsForPublishFinish:publishModel:;
- (BOOL)hasSameTopicWithFlashMobTitle:publishModel:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
