@interface BDXBridgeShowActionSheetMethodResultModel : BDXBridgeModel
@property (nonatomic) BDXBridgeShowActionSheetDetail detail;
@property (nonatomic) q action;
- (long long)action;
- (void)setDetail:;
- (void)setAction:;
- (id)detail;
- (void).cxx_destruct;
+ (id)actionJSONTransformer;
+ (id)detailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
