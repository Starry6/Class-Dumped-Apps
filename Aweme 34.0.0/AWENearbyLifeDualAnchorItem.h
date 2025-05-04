@interface AWENearbyLifeDualAnchorItem : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) AWENearbyC2CellTextData textInfo;
@property (nonatomic) AWEURLModel imgInfo;
@property (nonatomic) double leftMargin;
- (id)imgInfo;
- (void)setImgInfo:;
- (double)leftMargin;
- (void)setLeftMargin:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTextInfo:;
- (id)textInfo;
+ (BOOL)automaticallyDefaultMapping;
+ (id)textInfoJSONTransformer;
+ (id)imgInfoJSONTransformer;
@end
