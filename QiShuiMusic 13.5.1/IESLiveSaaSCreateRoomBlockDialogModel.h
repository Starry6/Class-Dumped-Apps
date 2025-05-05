@interface IESLiveSaaSCreateRoomBlockDialogModel : BDDynamicMTLModel
@property (nonatomic) Q type;
@property (nonatomic) Q scene;
@property (nonatomic) IESLiveSaaSImage icon;
@property (nonatomic) IESLiveSaaSDisplayTextModel title;
@property (nonatomic) IESLiveSaaSDisplayTextModel subTitle;
@property (nonatomic) NSArray buttonTextArray;
@property (nonatomic) IESLiveSaaSDisplayTextModel extraMessage;
@property (nonatomic) NSDictionary businessInfo;
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray buttonsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)buttonsArrayJSONTransformer;
+ (id)extraMessageJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)subTitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;
@end
