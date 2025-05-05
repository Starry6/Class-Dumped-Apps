@interface IDSConnection : NSObject
@property (nonatomic) _IDSConnection _internal;
@property (nonatomic) IDSAccount account;
@property (nonatomic) BOOL isActive;
- (id)account;
- (id)_internal;
- (id)initWithAccount:commands:;
- (void)dealloc;
- (void)removeDelegate:;
- (BOOL)sendMessage:toDestinations:options:identifier:error:;
- (BOOL)sendMessage:toDestinations:priority:options:identifier:error:;
- (BOOL)sendData:toDestinations:priority:options:identifier:error:;
- (void)addDelegate:queue:;
- (BOOL)sendProtobuf:toDestinations:priority:options:identifier:error:;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (id)_initWithAccount:commands:indirectDelegateCallouts:;
- (BOOL)isActive;
+ (id)_connectionWithAccount:commands:indirectDelegateCallouts:;
@end
