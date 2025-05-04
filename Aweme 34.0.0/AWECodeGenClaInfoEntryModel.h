@interface AWECodeGenClaInfoEntryModel : AWEBaseDataModel
@property (nonatomic) NSString key;
@property (nonatomic) AWECodeGenClaInfoModel valueModel;
- (id)valueModel;
- (void)setValueModel:;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
