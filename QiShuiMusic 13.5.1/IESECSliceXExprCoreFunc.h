@interface IESECSliceXExprCoreFunc : NSObject
@property (nonatomic) NSString symbol;
@property (nonatomic) Q minArgsCount;
@property (nonatomic) Q maxArgsCount;
@property (nonatomic) BOOL needGlobalEnv;
- (id)execute:withGlobalEnv:error:;
- (unsigned long long)maxArgsCount;
- (unsigned long long)minArgsCount;
- (BOOL)needGlobalEnv;
- (id)symbol;
- (id)execute:error:;
@end
