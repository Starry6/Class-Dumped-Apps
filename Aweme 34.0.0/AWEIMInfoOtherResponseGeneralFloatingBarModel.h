@interface AWEIMInfoOtherResponseGeneralFloatingBarModel : IESIMBaseApiModel
@property (nonatomic) Q barType;
@property (nonatomic) NSString barText;
@property (nonatomic) NSString btnText;
@property (nonatomic) NSString btnAction;
@property (nonatomic) q updateTimestamp;
- (id)btnText;
- (void)setBtnText:;
- (id)btnAction;
- (id)barText;
- (void)setBarType:;
- (void)setBarText:;
- (void)setBtnAction:;
- (unsigned long long)barType;
- (void).cxx_destruct;
- (long long)updateTimestamp;
- (void)setUpdateTimestamp:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)barTypeJSONTransformer;
@end
