@interface BDREFunc : NSObject
@property (nonatomic) NSString symbol;
- (id)paramsInvalidateErrorWithSelectorName:;
- (void)setSymbol:;
- (id)execute:;
- (id)symbol;
- (void).cxx_destruct;
- (id)execute:error:;
@end
