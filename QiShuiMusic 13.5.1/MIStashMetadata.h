@interface MIStashMetadata : NSObject
@property (nonatomic) NSDate dateStashed;
@property (nonatomic) NSDate dateOriginallyInstalled;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)serializeToURL:error:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dateStashed;
- (id)dateOriginallyInstalled;
- (void)setDateStashed:;
- (void)setDateOriginallyInstalled:;
+ (BOOL)supportsSecureCoding;
+ (id)metadataFromURL:error:;
@end
