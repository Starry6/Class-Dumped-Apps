@interface AWEAdCardClickResultModel : BDXBridgeModel
@property (nonatomic) q open_status;
@property (nonatomic) q mp_status;
@property (nonatomic) q web_status;
- (void)setMp_status:;
- (void)setWeb_status:;
- (void)setOpen_status:;
- (long long)open_status;
- (long long)mp_status;
- (long long)web_status;
+ (id)JSONKeyPathsByPropertyKey;
@end
