@interface AWECodeGenErrReasonModel : AWEBaseDataModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
- (id)value;
- (void)setKey:;
- (id)key;
- (void)setValue:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
