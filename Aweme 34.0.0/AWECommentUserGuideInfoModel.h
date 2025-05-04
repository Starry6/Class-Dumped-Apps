@interface AWECommentUserGuideInfoModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) q linkIndex;
@property (nonatomic) q linkLength;
@property (nonatomic) NSString linkUrl;
@property (nonatomic) NSString btnText;
- (long long)linkLength;
- (id)btnText;
- (void)setBtnText:;
- (void)setLinkLength:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)linkIndex;
- (void)setLinkIndex:;
- (id)linkUrl;
- (void)setLinkUrl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
