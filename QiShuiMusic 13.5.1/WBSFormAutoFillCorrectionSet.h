@interface WBSFormAutoFillCorrectionSet : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSDictionary fingerprintsToClassifications;
@property (nonatomic) NSDictionary fingerprintsToCorrections;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)domain;
- (BOOL)isEqual:;
- (id)initWithDomain:fingerprintsToClassifications:;
- (id)initWithDomain:fingerprintsToCorrections:;
- (id)fingerprintsToClassifications;
- (id)fingerprintsToCorrections;
@end
