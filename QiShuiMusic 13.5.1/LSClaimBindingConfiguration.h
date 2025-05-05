@interface LSClaimBindingConfiguration : NSObject
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) Q bundleClassMask;
@property (nonatomic) BOOL addClaimRecordIfMissing;
- (void)_LS_setAddClaimRecordIfMissing:;
- (id)typeIdentifier;
- (void).cxx_destruct;
- (id)initWithTypeIdentifier:;
- (unsigned long long)bundleClassMask;
- (void)setBundleClassMask:;
- (BOOL)addClaimRecordIfMissing;
- (void)setAddClaimRecordIfMissing:;
@end
