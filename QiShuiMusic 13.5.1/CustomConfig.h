@interface CustomConfig : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray scoreElementsArray;
@property (nonatomic) Q scoreElementsArray_Count;
@property (nonatomic) NSString name;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
