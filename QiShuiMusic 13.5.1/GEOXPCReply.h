@interface GEOXPCReply : NSObject
@property (nonatomic) NSObject<OS_xpc_object> object;
@property (nonatomic) NSObject<OS_xpc_object> replyDictionary;
@property (nonatomic) C flags;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:;
- (void)setObject:;
- (id)init;
- (void)send;
- (void)setError:;
- (void)encodeToXPCDictionary:;
- (id)error;
- (id)initWithXPCDictionary:error:;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (unsigned char)flags;
- (id)replyDictionary;
@end
