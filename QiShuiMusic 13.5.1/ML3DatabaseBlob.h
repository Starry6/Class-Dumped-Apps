@interface ML3DatabaseBlob : NSObject
- (id)init;
- (void)dealloc;
- (id)data;
- (unsigned long long)length;
- (id)initWithSQLiteHandle:;
- (int)readData:numberOfBytes:offset:;
- (int)writeData:numberOfBytes:offset:;
@end
