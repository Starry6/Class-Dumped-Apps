@interface ECBIMIData : NSObject
@property (nonatomic) NSData indicator;
@property (nonatomic) NSURL location;
@property (nonatomic) NSURL evidenceLocation;
@property (nonatomic) NSString indicatorHash;
@property (nonatomic) NSString hashAlgorithm;
- (id)indicator;
- (unsigned long long)hash;
- (id)location;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)hashAlgorithm;
- (id)initWithIndicator:location:evidenceLocation:indicatorHash:hashAlgorithm:;
- (id)evidenceLocation;
- (id)indicatorHash;
+ (id)bimiDataForHeaders:;
@end
