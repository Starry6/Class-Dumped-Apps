@interface CSDecoder : NSObject
@property (nonatomic) {?=*{?=IC}} obj;
@property (nonatomic) r^{__CFAllocator=} contentDeallocator;
@property (nonatomic) NSData data;
@property (nonatomic) @ backingStore;
- (void)dealloc;
- (id)obj;
- (id)backingStore;
- (id)data;
- (id)initWithData:obj:;
- (void)setBackingStore:;
- (id)decodeObjectNoCopy:;
- (id)debugDescription;
- (id)decodeObject:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)contentDeallocator;
- (id)description;
- (id)decode;
+ (id)decodeURLPreservingSecurityScope:;
@end
