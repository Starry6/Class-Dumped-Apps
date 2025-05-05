@interface BMStreamsAccessDescriptor : NSObject
@property (nonatomic) Q mode;
@property (nonatomic) Q streamType;
@property (nonatomic) NSString streamIdentifier;
@property (nonatomic) Q domain;
- (id)streamIdentifier;
- (id)accessDescriptorWithAccessMode:;
- (unsigned long long)hash;
- (id)initWithAccessMode:streamType:streamIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)streamType;
- (unsigned long long)domain;
- (unsigned long long)mode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
