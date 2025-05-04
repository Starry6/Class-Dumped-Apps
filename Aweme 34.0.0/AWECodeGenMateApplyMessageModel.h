@interface AWECodeGenMateApplyMessageModel : AWEBaseDataModel
@property (nonatomic) q userId;
@property (nonatomic) NSString message;
- (long long)userId;
- (id)message;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
