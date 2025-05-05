@interface GEONetworkDataReader : NSObject
- (void)dealloc;
- (id)readString;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)allData;
- (void)appendNetworkData:;
- (BOOL)readUnsignedShort:;
- (BOOL)readUnsignedInt:;
- (id)readData:;
- (void)markOffset;
- (void)seekToMarkedOffset;
- (BOOL)hasUnreadData;
@end
