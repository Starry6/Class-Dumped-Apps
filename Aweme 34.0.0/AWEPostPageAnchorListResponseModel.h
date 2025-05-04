@interface AWEPostPageAnchorListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray anchorList;
@property (nonatomic) AWECodeGenAnchorListTipModel tipModel;
- (id)anchorList;
- (void)setAnchorList:;
- (id)tipModel;
- (void)setTipModel:;
- (void).cxx_destruct;
+ (id)anchorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
