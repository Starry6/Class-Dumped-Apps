@interface TKCompactTLVRecord : TKTLVRecord
- (id)initWithTag:value:;
+ (id)parseFromDataSource:;
@end
