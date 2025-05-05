@interface PIAMessageTypeInvocation : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary data;
@property (nonatomic) q ID;
@property (nonatomic) q version;
- (void)setID:;
- (id)JSONString;
- (long long)ID;
- (void)setName:;
- (void)setVersion:;
- (id)data;
- (long long)version;
- (id)initWithDictionary:;
- (id)initWithJSONString:;
- (void).cxx_destruct;
- (void)setData:;
- (id)name;
- (id)JSONDictionary;
@end
