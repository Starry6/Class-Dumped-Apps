@interface IESPBRawDataReader : NSObject
- (long long)readRawVarint64;
- (int)readRawVarint32;
- (char)readRawByte;
- (id)initWithData:;
@end
