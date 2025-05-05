@interface SSXPCData : NSData
@property (nonatomic) NSObject<OS_xpc_object> xpcData;
- (void)dealloc;
- (id)bytes;
- (id)initWithXPCData:;
- (unsigned long long)length;
- (id)xpcData;
- (id)copyWithZone:;
@end
