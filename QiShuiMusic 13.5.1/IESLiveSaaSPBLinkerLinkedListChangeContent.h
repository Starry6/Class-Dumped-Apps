@interface IESLiveSaaSPBLinkerLinkedListChangeContent : GPBMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSMutableArray preLinkUsersArray;
@property (nonatomic) Q preLinkUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) NSInteger pushType;
@property (nonatomic) GPBInt64ObjectDictionary linkerContentMap;
@property (nonatomic) Q linkerContentMap_Count;
+ (id)descriptor;
@end
