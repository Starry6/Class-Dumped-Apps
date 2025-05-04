@interface AWECommentExtraModel : AWEBaseApiModel
@property (nonatomic) AWECommentHotspotInfoModel hotspotCommentInfo;
@property (nonatomic) BOOL isFolded;
- (id)hotspotCommentInfo;
- (void)setHotspotCommentInfo:;
- (void)setIsFolded:;
- (void).cxx_destruct;
- (BOOL)isFolded;
+ (id)hotspotCommentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
