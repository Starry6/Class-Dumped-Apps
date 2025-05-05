@interface TRIPBFieldOptions : TRIPBMessage
@property (nonatomic) NSInteger ctype;
@property (nonatomic) BOOL hasCtype;
@property (nonatomic) BOOL packed;
@property (nonatomic) BOOL hasPacked;
@property (nonatomic) NSInteger jstype;
@property (nonatomic) BOOL hasJstype;
@property (nonatomic) BOOL lazy;
@property (nonatomic) BOOL hasLazy;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL weak;
@property (nonatomic) BOOL hasWeak;
@property (nonatomic) NSMutableArray uninterpretedOptionArray;
@property (nonatomic) Q uninterpretedOptionArray_Count;
+ (id)descriptor;
@end
