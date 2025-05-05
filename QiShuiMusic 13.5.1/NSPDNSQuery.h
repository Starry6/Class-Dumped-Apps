@interface NSPDNSQuery : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q recordType;
@property (nonatomic) q recordClass;
- (long long)recordType;
- (void).cxx_destruct;
- (id)name;
- (long long)recordClass;
- (id)initWithName:recordType:recordClass:;
- (id)copyStateDictionary;
@end
