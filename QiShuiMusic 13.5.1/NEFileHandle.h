@interface NEFileHandle : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSObject<OS_xpc_object> dictionary;
@property (nonatomic) BOOL launchOwnerWhenReadable;
@property (nonatomic) NSFileHandle handle;
- (id)dictionary;
- (id)handle;
- (BOOL)launchOwnerWhenReadable;
- (id)initWithFileDescriptor:launchOwnerWhenReadable:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initFromDictionary:;
@end
