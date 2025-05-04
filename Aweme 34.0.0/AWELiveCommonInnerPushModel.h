@interface AWELiveCommonInnerPushModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) AWELiveInnerPushContentModel contentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)contentModel;
- (void)setContentModel:;
- (id)transFormToGuideModel;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)contentModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
