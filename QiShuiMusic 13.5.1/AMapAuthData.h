@interface AMapAuthData : NSObject
@property (nonatomic) C version;
@property (nonatomic) NSData data;
@property (nonatomic) NSData publicData;
@property (nonatomic) NSData normalData;
@property (nonatomic) NSData encryptedData;
@property (nonatomic) NSData reserveData;
- (void)setReserveData:;
- (void)appendEncryptedData:;
- (void)appendEncryptedDataArray:;
- (void)appendNormalData:;
- (void)appendNormalDataArray:;
- (void)appendPublicData:;
- (void)appendPublicDataArray:;
- (id)encryptWithRowData:;
- (id)normalData;
- (id)publicData;
- (id)reserveData;
- (id)init;
- (id)data;
- (unsigned char)version;
- (void).cxx_destruct;
- (id)initWithVersion:;
- (id)encryptedData;
@end
