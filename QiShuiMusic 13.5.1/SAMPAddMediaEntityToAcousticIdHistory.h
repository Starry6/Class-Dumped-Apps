@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand
@property (nonatomic) NSString adamId;
@property (nonatomic) NSString affiliateId;
- (id)adamId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setAdamId:;
- (id)affiliateId;
- (void)setAffiliateId:;
+ (id)addMediaEntityToAcousticIdHistory;
+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:context:;
@end
