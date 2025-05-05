@interface AnchorEffect : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray effectListArray;
@property (nonatomic) Q effectListArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary effectMap;
@property (nonatomic) Q effectMap_Count;
+ (id)descriptor;
@end
