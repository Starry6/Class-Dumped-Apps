@interface IESIMSearchNilTextModel : IESIMBaseApiModel
@property (nonatomic) NSString fullString;
@property (nonatomic) NSString linkString;
@property (nonatomic) NSString linkURL;
- (id)linkString;
- (void)setFullString:;
- (void)setLinkString:;
- (void).cxx_destruct;
- (id)fullString;
- (id)linkURL;
- (void)setLinkURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
