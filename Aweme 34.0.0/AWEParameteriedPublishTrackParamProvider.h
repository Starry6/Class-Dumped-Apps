@interface AWEParameteriedPublishTrackParamProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsForPublish:publishModel:;
- (id)paramsForPublishFinish:publishModel:;
+ (id)composerParamsWithPublishModel:;
@end
