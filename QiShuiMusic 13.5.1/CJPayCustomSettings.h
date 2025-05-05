@interface CJPayCustomSettings : JSONModel
@property (nonatomic) NSString withdrawPageTitle;
@property (nonatomic) NSString withdrawPageMiddleText;
@property (nonatomic) NSString withdrawPageBottomText;
@property (nonatomic) NSDictionary withdrawResultPageDescDict;
@property (nonatomic) NSDictionary withdrawPageMiddleTextDict;
- (void)setWithdrawPageBottomText:;
- (void)setWithdrawPageMiddleText:;
- (void)setWithdrawPageMiddleTextDict:;
- (void)setWithdrawPageTitle:;
- (void)setWithdrawResultPageDescDict:;
- (id)withdrawPageBottomText;
- (id)withdrawPageMiddleText;
- (id)withdrawPageMiddleTextDict;
- (id)withdrawPageTitle;
- (id)withdrawResultPageDescDict;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
