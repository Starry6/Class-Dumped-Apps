@interface IESIMMaskInfoModel : IESIMBaseApiModel
@property (nonatomic) BOOL showMask;
@property (nonatomic) Q maskInfoType;
@property (nonatomic) Q maskInfoStatusType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString lableContent;
- (id)lableContent;
- (unsigned long long)maskInfoStatusType;
- (unsigned long long)maskInfoType;
- (void)setLableContent:;
- (void)setMaskInfoStatusType:;
- (void)setMaskInfoType:;
- (void)setShowMask:;
- (BOOL)showMask;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)maskInfoStatusTypeJSONTransformer;
+ (id)maskInfoTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
