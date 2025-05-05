@interface HTSLiveUserPieceModel : IESLiveDynamicMTLModel
@property (nonatomic) HTSLiveUser userModel;
@property (nonatomic) NSNumber withColon;
@property (nonatomic) BOOL selfShowRealName;
@property (nonatomic) NSString leftAdditionalContent;
@property (nonatomic) NSString rightAdditionalContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
