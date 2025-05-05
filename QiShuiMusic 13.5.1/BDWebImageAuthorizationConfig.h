@interface BDWebImageAuthorizationConfig : NSObject
@property (nonatomic) NSArray webAuthCodes;
@property (nonatomic) Q authorizationConfigTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)authorizationConfigTimestamp;
- (void)setAuthorizationConfigTimestamp:;
- (void)setWebAuthCodes:;
- (id)webAuthCodes;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
