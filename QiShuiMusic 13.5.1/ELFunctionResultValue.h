@interface ELFunctionResultValue : NSObject
@property (nonatomic) NSString functionName;
@property (nonatomic) NSArray functionArgs;
- (id)functionArgs;
- (void)setFunctionArgs:;
- (id)functionName;
- (void).cxx_destruct;
- (void)setFunctionName:;
@end
