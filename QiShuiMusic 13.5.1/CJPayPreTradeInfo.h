@interface CJPayPreTradeInfo : JSONModel
@property (nonatomic) NSString bankCardID;
@property (nonatomic) NSString cardNoMask;
@property (nonatomic) NSString mobileMask;
@property (nonatomic) NSString bankName;
@property (nonatomic) NSString exts;
@property (nonatomic) CJPayPreTradeTrackInfo trackInfo;
- (id)bankCardID;
- (id)cardNoMask;
- (id)mobileMask;
- (void)setBankCardID:;
- (void)setCardNoMask:;
- (void)setMobileMask:;
- (void).cxx_destruct;
- (id)bankName;
- (void)setBankName:;
- (id)trackInfo;
- (void)setTrackInfo:;
- (id)exts;
- (void)setExts:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
