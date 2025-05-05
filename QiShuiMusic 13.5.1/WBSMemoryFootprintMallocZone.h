@interface WBSMemoryFootprintMallocZone : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q sizeInUse;
@property (nonatomic) Q sizeAllocated;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithMallocZone:;
- (unsigned long long)sizeInUse;
- (unsigned long long)sizeAllocated;
+ (BOOL)supportsSecureCoding;
@end
