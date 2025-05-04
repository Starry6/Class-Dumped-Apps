@interface AWECommentQualityStampModel : AWEBaseApiModel
@property (nonatomic) NSString qualityCommentStampIconLight;
@property (nonatomic) NSString qualityCommentStampIconDark;
@property (nonatomic) NSString qualityCommentStampJumpUrl;
@property (nonatomic) Q qualityCommentStampType;
- (id)qualityCommentStampJumpUrl;
- (id)qualityCommentStampIconLight;
- (id)qualityCommentStampIconDark;
- (unsigned long long)qualityCommentStampType;
- (void)setQualityCommentStampIconLight:;
- (void)setQualityCommentStampIconDark:;
- (void)setQualityCommentStampJumpUrl:;
- (void)setQualityCommentStampType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
