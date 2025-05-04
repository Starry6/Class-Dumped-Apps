@interface AWECodeGenSearchCardInfoModel : AWEBaseDataModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString text;
@property (nonatomic) NSString groupId;
- (id)schema;
- (void)setGroupId:;
- (id)groupId;
- (void)setSchema:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
