@interface AWEMaskInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL showMask;
@property (nonatomic) Q maskInfoType;
@property (nonatomic) Q maskInfoStatusType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString lableContent;
- (BOOL)showMask;
- (void)setShowMask:;
- (unsigned long long)maskInfoType;
- (void)setMaskInfoType:;
- (unsigned long long)maskInfoStatusType;
- (void)setMaskInfoStatusType:;
- (id)lableContent;
- (void)setLableContent:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)maskInfoTypeJSONTransformer;
+ (id)maskInfoStatusTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
