@interface NWRemoteConnectionWriteRequest : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSUUID clientID;
- (id)data;
- (void)setClientID:;
- (void).cxx_destruct;
- (void)setData:;
- (id)clientID;
- (id)initWithData:clientID:;
@end
