@interface AWECodeGenGeneralNoticeButtonModel : AWEBaseDataModel
@property (nonatomic) q btnType;
@property (nonatomic) AWECodeGenNoticeButtonModel generalButtonModel;
@property (nonatomic) NSArray allowShowButtonTypesArray;
- (long long)btnType;
- (void)setBtnType:;
- (id)generalButtonModel;
- (void)setGeneralButtonModel:;
- (id)allowShowButtonTypesArray;
- (void)setAllowShowButtonTypesArray:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
