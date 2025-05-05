@interface IESIMUserRIPModel : IESIMBaseApiModel
@property (nonatomic) NSString textBeforeLink;
@property (nonatomic) NSString textAfterLink;
@property (nonatomic) NSString textLink;
@property (nonatomic) NSString linkUrl;
- (void)setTextAfterLink:;
- (void)setTextBeforeLink:;
- (void)setTextLink:;
- (id)textAfterLink;
- (id)textBeforeLink;
- (id)textLink;
- (void).cxx_destruct;
- (id)linkUrl;
- (void)setLinkUrl:;
+ (id)JSONKeyPathsByPropertyKey;
@end
