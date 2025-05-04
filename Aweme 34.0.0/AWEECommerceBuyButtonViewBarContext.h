@interface AWEECommerceBuyButtonViewBarContext : NSObject
@property (nonatomic) <AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) @? assignLogExtraDictBlock;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)commonCtx;
- (void)setCommonCtx:;
- (void)setAssignLogExtraDictBlock:;
- (id)assignLogExtraDictBlock;
- (void).cxx_destruct;
@end
