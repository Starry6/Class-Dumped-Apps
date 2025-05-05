@interface CHEncodedStrokeIdentifier : NSObject
@property (nonatomic) NSData encodedStrokeIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)encodedStrokeIdentifier;
- (BOOL)isEqualToCHEncodedStrokeIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
