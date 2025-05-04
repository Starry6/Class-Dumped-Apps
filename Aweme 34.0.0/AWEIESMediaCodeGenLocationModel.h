@interface AWEIESMediaCodeGenLocationModel : AWEBaseDataModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString name;
@property (nonatomic) NSString asciName;
@property (nonatomic) NSString localId;
- (id)asciName;
- (void)setAsciName:;
- (id)code;
- (id)localId;
- (void)setCode:;
- (void)setLocalId:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
