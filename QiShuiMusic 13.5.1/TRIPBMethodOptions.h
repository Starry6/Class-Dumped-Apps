@interface TRIPBMethodOptions : TRIPBMessage
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) NSInteger idempotencyLevel;
@property (nonatomic) BOOL hasIdempotencyLevel;
@property (nonatomic) NSMutableArray uninterpretedOptionArray;
@property (nonatomic) Q uninterpretedOptionArray_Count;
+ (id)descriptor;
@end
