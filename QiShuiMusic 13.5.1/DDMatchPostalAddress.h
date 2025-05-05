@interface DDMatchPostalAddress : DDMatch
@property (nonatomic) NSString street;
@property (nonatomic) NSString city;
@property (nonatomic) NSString state;
@property (nonatomic) NSString postalCode;
@property (nonatomic) NSString country;
- (id)city;
- (id)postalCode;
- (id)country;
- (id)state;
- (void).cxx_destruct;
- (id)initWithDDScannerResult:;
- (id)street;
@end
