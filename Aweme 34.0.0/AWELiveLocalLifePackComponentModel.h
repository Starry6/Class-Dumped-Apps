@interface AWELiveLocalLifePackComponentModel : MTLModel
@property (nonatomic) AWELiveLocalLifeContentModel contentModel;
@property (nonatomic) NSNumber roomId;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomId;
- (void)setRoomId:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)contentModel;
- (void)setContentModel:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)contentModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
