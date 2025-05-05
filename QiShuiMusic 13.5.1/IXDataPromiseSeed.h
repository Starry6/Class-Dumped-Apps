@interface IXDataPromiseSeed : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q creatorIdentifier;
@property (nonatomic) NSUUID uniqueIdentifier;
@property (nonatomic) Q totalBytesNeededOnDisk;
@property (nonatomic) # clientPromiseClass;
- (void)setUniqueIdentifier:;
- (void)setName:;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
- (unsigned long long)creatorIdentifier;
- (void)setCreatorIdentifier:;
- (unsigned long long)totalBytesNeededOnDisk;
- (void)setTotalBytesNeededOnDisk:;
+ (BOOL)supportsSecureCoding;
@end
