@interface IESLiveSaaSCommentConfig : BDDynamicMTLModel
@property (nonatomic) NSArray commentColorsArray;
@property (nonatomic) NSArray commentRolesArray;
@property (nonatomic) NSString roleSuffix;
@property (nonatomic) NSString roleTitle;
@property (nonatomic) NSString unlockRoleTip;
@property (nonatomic) NSArray commentMedalsArray;
@property (nonatomic) NSString medalTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)commentColorsArrayJSONTransformer;
+ (id)commentMedalsArrayJSONTransformer;
+ (id)commentRolesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
