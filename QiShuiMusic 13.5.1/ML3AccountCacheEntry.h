@interface ML3AccountCacheEntry : NSObject
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString altDSID;
- (id)appleID;
- (void)setAltDSID:;
- (id)altDSID;
- (void)setAppleID:;
- (id)initWithAppleID:altDSID:;
- (void).cxx_destruct;
@end
