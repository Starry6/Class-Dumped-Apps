@interface BMNameComponents : NSObject
@property (nonatomic) NSString namePrefix;
@property (nonatomic) NSString givenName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString previousFamilyName;
@property (nonatomic) NSString familyName;
@property (nonatomic) NSString nameSuffix;
@property (nonatomic) NSString nickname;
- (id)givenName;
- (id)initWithProtoData:;
- (id)proto;
- (id)familyName;
- (id)middleName;
- (id)encodeAsProto;
- (id)nickname;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)nameSuffix;
- (id)namePrefix;
- (BOOL)isEqual:;
- (id)previousFamilyName;
- (id)initWithNamePrefix:givenName:middleName:previousFamilyName:familyName:nameSuffix:nickname:;
@end
