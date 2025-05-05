@interface NSPDNSResourceRecord : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString name;
@property (nonatomic) q recordClass;
@property (nonatomic) Q timeToLive;
@property (nonatomic) Q dataLength;
@property (nonatomic) NSString resourceString;
- (unsigned long long)dataLength;
- (unsigned long long)timeToLive;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (long long)recordClass;
- (id)resourceString;
- (id)initFromByteParser:;
- (id)copyStateDictionary;
+ (id)typeToString:;
@end
