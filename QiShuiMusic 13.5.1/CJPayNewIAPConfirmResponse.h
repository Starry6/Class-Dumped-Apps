@interface CJPayNewIAPConfirmResponse : CJPayBaseResponse
@property (nonatomic) BOOL finishTransaction;
- (BOOL)finishTransaction;
- (void)setFinishTransaction:;
- (id)toNewIAPConfirmModel;
+ (id)keyMapper;
@end
