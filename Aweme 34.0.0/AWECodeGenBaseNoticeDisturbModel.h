@interface AWECodeGenBaseNoticeDisturbModel : AWEBaseDataModel
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL disturb;
- (void)setDisturb:;
- (BOOL)disturb;
- (int)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
