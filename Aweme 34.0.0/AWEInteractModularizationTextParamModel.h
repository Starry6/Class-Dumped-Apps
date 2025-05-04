@interface AWEInteractModularizationTextParamModel : IESIMBaseApiModel
@property (nonatomic) Q index;
@property (nonatomic) NSString name;
@property (nonatomic) NSString secName;
@property (nonatomic) BOOL needTruncation;
- (id)secName;
- (BOOL)needTruncation;
- (void)setNeedTruncation:;
- (void)setSecName:;
- (void)setIndex:;
- (unsigned long long)index;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
