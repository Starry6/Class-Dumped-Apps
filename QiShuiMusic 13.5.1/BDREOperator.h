@interface BDREOperator : NSObject
@property (nonatomic) NSString symbol;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSInteger argsLength;
- (int)argsLength;
- (id)paramsInvalidateErrorWithSelectorName:;
- (void)setArgsLength:;
- (void)setSymbol:;
- (void)setPriority:;
- (id)execute:;
- (id)symbol;
- (void).cxx_destruct;
- (id)execute:error:;
- (int)priority;
@end
