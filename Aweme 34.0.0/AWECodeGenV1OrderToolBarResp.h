@interface AWECodeGenV1OrderToolBarResp : AWEBaseResponseModel
@property (nonatomic) AWECodeGenOrderToolBarDataModel dataModel;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)extra;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
+ (id)JSONKeyPathsByPropertyKey;
@end
