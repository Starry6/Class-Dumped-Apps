@interface SFClientSubCredentialParams : NSObject
@property (nonatomic) NSString adamID;
@property (nonatomic) NSArray adamIDs;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString issuerID;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (id)adamID;
- (void)setAdamID:;
- (id)adamIDs;
- (void)setAdamIDs:;
- (id)issuerID;
- (void)setIssuerID:;
+ (BOOL)supportsSecureCoding;
@end
