@interface WBSMemoryFootprint : NSObject
@property (nonatomic) NSArray zones;
@property (nonatomic) Q residentSize;
@property (nonatomic) Q dirtySize;
@property (nonatomic) WBSMemoryFootprintMallocZone defaultMallocZone;
- (id)init;
- (id)initWithError:;
- (unsigned long long)residentSize;
- (id)initWithCoder:;
- (unsigned long long)dirtySize;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)zones;
- (id)defaultMallocZone;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
