@interface IDSMagnetCorruptionMetric : NSObject
@property (nonatomic) Q correctFramesSinceLastCorruption;
@property (nonatomic) Q correctRawBytesSinceLastCorruption;
@property (nonatomic) Q discardedRawBytes;
@property (nonatomic) Q recoveryTimeInMs;
@property (nonatomic) Q linkType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned long long)linkType;
- (id)initWithCorrectFramesSinceLastCorruption:correctRawBytesSinceLastCorruption:discardedRawBytes:recoveryTimeInMs:linkType:;
- (unsigned long long)correctFramesSinceLastCorruption;
- (unsigned long long)correctRawBytesSinceLastCorruption;
- (unsigned long long)discardedRawBytes;
- (unsigned long long)recoveryTimeInMs;
@end
