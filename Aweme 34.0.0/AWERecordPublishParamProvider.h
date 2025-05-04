@interface AWERecordPublishParamProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsForPublish:publishModel:;
- (id)paramsForPublishFinish:publishModel:;
- (id)params:publishModel:;
- (id)inspirationParams:publishModel:;
@end
