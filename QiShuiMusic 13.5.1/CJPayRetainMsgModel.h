@interface CJPayRetainMsgModel : JSONModel
@property (nonatomic) NSString leftMsg;
@property (nonatomic) q leftMsgType;
@property (nonatomic) NSString rightMsg;
@property (nonatomic) NSString topLeftMsg;
@property (nonatomic) q voucherType;
@property (nonatomic) NSString topLeftPosition;
- (void)setLeftMsgType:;
- (id)topLeftPosition;
- (id)leftMsg;
- (void)setVoucherType:;
- (long long)leftMsgType;
- (id)rightMsg;
- (void)setLeftMsg:;
- (void)setRightMsg:;
- (void)setTopLeftMsg:;
- (void)setTopLeftPosition:;
- (id)topLeftMsg;
- (long long)voucherType;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
