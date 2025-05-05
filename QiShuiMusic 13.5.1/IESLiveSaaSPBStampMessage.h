@interface IESLiveSaaSPBStampMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray stampsArray;
@property (nonatomic) Q stampsArray_Count;
+ (id)descriptor;
@end
