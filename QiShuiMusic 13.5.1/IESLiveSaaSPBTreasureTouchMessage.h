@interface IESLiveSaaSPBTreasureTouchMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray itemsArray;
@property (nonatomic) Q itemsArray_Count;
@property (nonatomic) NSInteger eventType;
+ (id)descriptor;
@end
