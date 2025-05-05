@interface MKMapAttribution : NSObject
@property (nonatomic) NSString providerString;
@property (nonatomic) UIImage providerImage;
@property (nonatomic) NSString providerName;
@property (nonatomic) NSAttributedString string;
@property (nonatomic) NSURL url;
- (id)string;
- (id)url;
- (id)providerName;
- (void).cxx_destruct;
- (id)attributedStringWithImage:;
- (id)disclosureArrow;
- (id)initWithStringAttributes:regionalAttributions:underlineText:applyLinkAttribution:scale:;
- (id)providerImage;
- (id)providerString;
+ (id)attributionUrlFromRegionalAttributions:;
@end
