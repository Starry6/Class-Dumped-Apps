@interface IESLiveEcomFansGroupEntryInfo : IESLiveDynamicMTLModel
@property (nonatomic) IESLiveEcomFansGroupUserData userData;
@property (nonatomic) NSString fansClubSchema;
@property (nonatomic) BOOL fansClubSwitch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)userDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
