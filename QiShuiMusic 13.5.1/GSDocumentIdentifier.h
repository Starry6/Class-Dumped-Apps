@interface GSDocumentIdentifier : NSObject
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDocumentIdentifier:;
- (id)initWithFileDescriptor:forItemAtURL:allocateIfNone:error:;
+ (BOOL)supportsSecureCoding;
@end
