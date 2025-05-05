@interface CKCBCorecryptoECPoint : NSObject
@property (nonatomic) r^{ccec_cp=QQ^{cczp_funcs}[0Q]} group;
@property (nonatomic) ^{ccec_affine_point=[1Q]} point;
- (id)point;
- (void)dealloc;
- (id)initWithPublicKey:;
- (id)group;
- (BOOL)isEqual:;
- (id)serializedPublicKey:;
- (id)initWithGeneratorForCP:;
- (id)add:corecryptoError:;
- (id)multiply:corecryptoError:;
- (id)initFromPublicKeyBytes:inGroup:compressed:corecryptoError:;
- (unsigned long long)pointAllocationSizeForGroup:;
- (id)initPoint:onGroup:;
+ (unsigned long long)groupOrderByteCountForCP:;
@end
