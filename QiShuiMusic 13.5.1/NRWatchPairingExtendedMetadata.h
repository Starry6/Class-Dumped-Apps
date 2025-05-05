@interface NRWatchPairingExtendedMetadata : NSObject
@property (nonatomic) q chipID;
@property (nonatomic) q pairingVersion;
@property (nonatomic) NSString productType;
@property (nonatomic) BOOL postFailsafeObliteration;
@property (nonatomic) BOOL isCellularEnabled;
- (void)setProductType:;
- (id)productType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)chipID;
- (id)description;
- (void)setChipID:;
- (long long)pairingVersion;
- (void)setPairingVersion:;
- (BOOL)postFailsafeObliteration;
- (void)setPostFailsafeObliteration:;
- (BOOL)isCellularEnabled;
- (void)setIsCellularEnabled:;
+ (BOOL)supportsSecureCoding;
@end
