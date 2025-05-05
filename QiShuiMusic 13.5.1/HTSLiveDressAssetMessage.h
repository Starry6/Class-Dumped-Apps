@interface HTSLiveDressAssetMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray dressIdArray;
@property (nonatomic) Q dressIdArray_Count;
+ (id)descriptor;
@end
