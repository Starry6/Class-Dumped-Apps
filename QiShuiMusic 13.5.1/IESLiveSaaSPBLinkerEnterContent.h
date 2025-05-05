@interface IESLiveSaaSPBLinkerEnterContent : GPBMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSString userOpenId;
@property (nonatomic) NSInteger applyType;
@property (nonatomic) NSMutableArray preLinkUsersArray;
@property (nonatomic) Q preLinkUsersArray_Count;
@property (nonatomic) IESLiveSaaSPBMatchEffect matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (nonatomic) IESLiveSaaSPBCityEffect cityEffect;
@property (nonatomic) BOOL hasCityEffect;
@property (nonatomic) Q version;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
+ (id)descriptor;
@end
