@interface BmfTask : NSObject
@property (nonatomic) ^v p;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (void)setOwn:;
- (BOOL)fillInputPacket:pkt:;
- (BOOL)fillOutputPacket:pkt:;
- (id)getInputStreamIds;
- (id)getOutputStreamIds;
- (id)init:istream_ids:ostream_ids:;
- (id)initFromPtr:own:;
- (id)popPacketFromInQueue:;
- (id)popPacketFromOutQueue:;
- (void)dealloc;
- (void)setTimestamp:;
- (id)ptr;
- (long long)timestamp;
- (id)p;
- (void)setP:;
@end
