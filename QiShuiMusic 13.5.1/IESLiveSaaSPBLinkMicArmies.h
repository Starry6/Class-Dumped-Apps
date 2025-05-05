@interface IESLiveSaaSPBLinkMicArmies : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableDictionary userArmiesMap;
@property (nonatomic) Q userArmiesMap_Count;
@property (nonatomic) NSMutableArray userArmiesListArray;
@property (nonatomic) Q userArmiesListArray_Count;
+ (id)descriptor;
@end
