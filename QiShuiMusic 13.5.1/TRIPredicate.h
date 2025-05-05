@interface TRIPredicate : TRIPBMessage
@property (nonatomic) NSInteger systemVariable;
@property (nonatomic) BOOL hasSystemVariable;
@property (nonatomic) NSInteger operation;
@property (nonatomic) BOOL hasOperation;
@property (nonatomic) NSMutableArray operandArray;
@property (nonatomic) Q operandArray_Count;
+ (id)descriptor;
@end
