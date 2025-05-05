@interface TRIPBServiceOptions : TRIPBMessage
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) NSMutableArray uninterpretedOptionArray;
@property (nonatomic) Q uninterpretedOptionArray_Count;
+ (id)descriptor;
@end
