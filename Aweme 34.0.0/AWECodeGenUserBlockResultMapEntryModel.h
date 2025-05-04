@interface AWECodeGenUserBlockResultMapEntryModel : AWEBaseDataModel
@property (nonatomic) NSString uid;
@property (nonatomic) BOOL result;
@property (nonatomic) NSString secUid;
- (id)secUid;
- (void)setSecUid:;
- (void)setUid:;
- (void)setResult:;
- (id)uid;
- (void).cxx_destruct;
- (BOOL)result;
+ (id)JSONKeyPathsByPropertyKey;
@end
