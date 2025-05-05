@interface PageNameStyle : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray fontStyleArray;
@property (nonatomic) Q fontStyleArray_Count;
@property (nonatomic) GPBDoubleArray directionArray;
@property (nonatomic) Q directionArray_Count;
@property (nonatomic) GPBDoubleArray positionArray;
@property (nonatomic) Q positionArray_Count;
+ (id)descriptor;
@end
