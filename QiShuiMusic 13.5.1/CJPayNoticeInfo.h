@interface CJPayNoticeInfo : JSONModel
@property (nonatomic) NSString noticeType;
@property (nonatomic) NSString notice;
@property (nonatomic) NSString withdrawBtnStatus;
- (void)setNoticeType:;
- (void)setWithdrawBtnStatus:;
- (id)withdrawBtnStatus;
- (void).cxx_destruct;
- (id)noticeType;
- (id)notice;
- (void)setNotice:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
