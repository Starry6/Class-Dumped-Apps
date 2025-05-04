@interface AWEUserPunishLinkContent : AWEBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) q linkIndex;
@property (nonatomic) q linkLength;
@property (nonatomic) NSString linkUrl;
- (long long)linkLength;
- (void)setLinkLength:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (long long)linkIndex;
- (void)setLinkIndex:;
- (id)linkUrl;
- (void)setLinkUrl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
