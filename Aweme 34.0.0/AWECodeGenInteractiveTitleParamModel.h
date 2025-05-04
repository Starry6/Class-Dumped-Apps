@interface AWECodeGenInteractiveTitleParamModel : AWEBaseDataModel
@property (nonatomic) NSInteger index;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL needTruncation;
@property (nonatomic) NSString secName;
- (id)secName;
- (BOOL)needTruncation;
- (void)setNeedTruncation:;
- (void)setSecName:;
- (void)setIndex:;
- (int)index;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
