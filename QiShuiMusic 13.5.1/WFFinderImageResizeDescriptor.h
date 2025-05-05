@interface WFFinderImageResizeDescriptor : NSObject
@property (nonatomic) Q format;
@property (nonatomic) Q size;
@property (nonatomic) BOOL preserveMetadata;
- (unsigned long long)format;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)size;
- (id)initWithFormat:size:preserveMetadata:;
- (BOOL)preserveMetadata;
+ (BOOL)supportsSecureCoding;
@end
