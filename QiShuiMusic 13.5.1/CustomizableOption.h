@interface CustomizableOption : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array fixedOptionArray;
@property (nonatomic) Q fixedOptionArray_Count;
@property (nonatomic) q upperLimit;
@property (nonatomic) q lowerLimit;
@property (nonatomic) BOOL supportCustomInput;
+ (id)descriptor;
@end
