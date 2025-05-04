@interface AWEIMCodeGenConsecutiveChatRelationInfoModel : AWEBaseDataModel
@property (nonatomic) NSString type;
@property (nonatomic) q createTime;
@property (nonatomic) q consecutiveChatCreateTime;
- (long long)consecutiveChatCreateTime;
- (void)setConsecutiveChatCreateTime:;
- (long long)createTime;
- (id)type;
- (void)setCreateTime:;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
