@interface TKDataSource : NSObject
@property (nonatomic) r* ptr;
@property (nonatomic) r* end;
@property (nonatomic) NSData data;
- (id)end;
- (id)data;
- (id)dataFromPtr:;
- (id)fetchDataWithLength:;
- (unsigned char)fetchByte;
- (BOOL)bytesSafeToRead:;
- (id)initWithData:;
- (id)ptr;
- (void).cxx_destruct;
@end
