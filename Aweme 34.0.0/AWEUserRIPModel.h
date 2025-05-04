@interface AWEUserRIPModel : AWEBaseApiModel
@property (nonatomic) NSString textBeforeLink;
@property (nonatomic) NSString textAfterLink;
@property (nonatomic) NSString textLink;
@property (nonatomic) NSString linkUrl;
- (id)textBeforeLink;
- (void)setTextBeforeLink:;
- (id)textAfterLink;
- (void)setTextAfterLink:;
- (id)textLink;
- (void)setTextLink:;
- (void).cxx_destruct;
- (id)linkUrl;
- (void)setLinkUrl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
