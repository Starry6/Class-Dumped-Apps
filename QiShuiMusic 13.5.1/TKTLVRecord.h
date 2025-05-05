@interface TKTLVRecord : NSObject
@property (nonatomic) Q tag;
@property (nonatomic) NSData value;
@property (nonatomic) NSData data;
- (unsigned long long)tag;
- (id)data;
- (void).cxx_destruct;
- (id)initWithTag:value:data:;
- (id)description;
- (id)value;
+ (id)recordFromData:;
+ (id)sequenceOfRecordsFromData:;
+ (id)parseFromDataSource:;
@end
