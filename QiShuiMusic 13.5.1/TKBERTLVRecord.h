@interface TKBERTLVRecord : TKTLVRecord
- (id)propertyList;
- (id)initWithTag:records:;
- (id)initWithTag:value:;
- (id)initWithPropertyList:;
+ (id)zuluDateFormatter;
+ (unsigned long long)encodeNumber:into:;
+ (id)parseFromDataSource:;
+ (id)dataForTag:;
@end
