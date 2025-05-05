@interface CJPayTypeVoucherMsgV2Model : JSONModel
@property (nonatomic) NSArray tag12;
@property (nonatomic) NSArray tag34;
@property (nonatomic) NSArray tag56;
- (id)cardListVoucherMsgArrayWithType:;
- (unsigned long long)p_voucherTagType:;
- (id)p_voucherText:;
- (void)setTag12:;
- (void)setTag34:;
- (void)setTag56:;
- (id)tag12;
- (id)tag34;
- (id)tag56;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
