@interface CKCBCorecryptoECScalar : NSObject
@property (nonatomic) r^{ccec_cp=QQ^{cczp_funcs}[0Q]} group;
@property (nonatomic) r^Q corecryptoScalar;
- (void)dealloc;
- (id)group;
- (BOOL)isEqual:;
- (id)initWithx963Representation:group:;
- (id)serializedBigEndianScalar;
- (id)inverseModOrder;
- (id)x963Representation;
- (id)initWithData:inGroup:reduction:corecryptoError:;
- (id)initWithRandomScalarInGroup:;
- (id)mapToCurve_SSWU_RandomOracle;
- (id)add:corecryptoError:;
- (id)sub:corecryptoError:;
- (id)multiply:corecryptoError:;
- (unsigned long long)scalarAllocationSizeForGroup:;
- (id)initWithScalarPointer:forGroup:;
- (id)corecryptoScalar;
@end
