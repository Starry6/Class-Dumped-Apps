@interface AWEECShoppingGuideMessageTextSectionModel : AWEECShoppingGuideMessageSectionModel
@property (nonatomic) NSString text;
@property (nonatomic) BOOL foldable;
@property (nonatomic) NSString cardId;
@property (nonatomic) q limitLine;
@property (nonatomic) BOOL closeSearchWordRequest;
- (long long)limitLine;
- (void)setLimitLine:;
- (void)setCloseSearchWordRequest:;
- (BOOL)closeSearchWordRequest;
- (BOOL)foldable;
- (void)setFoldable:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)cardId;
- (void)setCardId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
