@interface IESECSliceXExprCoreOperator : NSObject
@property (nonatomic) NSString symbol;
@property (nonatomic) Q priority;
@property (nonatomic) Q type;
- (id)symbol;
- (unsigned long long)type;
- (id)execute:error:;
- (unsigned long long)priority;
@end
