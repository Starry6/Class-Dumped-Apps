@interface TKSimpleTLVRecord : TKTLVRecord
- (id)initWithTag:value:;
+ (id)parseFromDataSource:error:;
@end
