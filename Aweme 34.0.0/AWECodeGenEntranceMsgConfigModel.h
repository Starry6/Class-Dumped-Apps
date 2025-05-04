@interface AWECodeGenEntranceMsgConfigModel : AWEBaseDataModel
@property (nonatomic) NSString entranceKey;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger promptType;
@property (nonatomic) NSString link;
- (id)entranceKey;
- (void)setEntranceKey:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
- (int)promptType;
- (void)setPromptType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
