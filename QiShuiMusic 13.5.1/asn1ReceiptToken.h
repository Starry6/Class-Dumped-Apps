@interface asn1ReceiptToken : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q typeVersion;
@property (nonatomic) asn1Token contentToken;
@property (nonatomic) NSString stringValue;
@property (nonatomic) Q integerValue;
- (void)dealloc;
- (unsigned long long)type;
- (id)stringValue;
- (id)description;
- (unsigned long long)integerValue;
- (id)_initWithType:typeVersion:contentToken:;
- (unsigned long long)typeVersion;
- (id)contentToken;
+ (id)readFromBuffer:;
@end
