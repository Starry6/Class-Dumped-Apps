@interface PKStrokeProviderSliceIdentifierConcrete : PKStrokeProviderSliceIdentifier
@property (nonatomic) {_PKStrokeID=I[16C]I} version;
- (id)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithUUID:version:tStart:tEnd:;
+ (BOOL)supportsSecureCoding;
@end
