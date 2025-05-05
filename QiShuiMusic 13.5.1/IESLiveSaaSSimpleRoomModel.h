@interface IESLiveSaaSSimpleRoomModel : BDDynamicMTLModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber userCount;
@property (nonatomic) IESLiveSaaSImage cover;
@property (nonatomic) IESLiveSaaSImage contentLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)idStr;
+ (id)contentLabelInfoJSONTransformer;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
