@interface CATInitializingIDSServiceConnectionContentAcknowledge : NSObject
@property (nonatomic) NSUUID connectionIdentifier;
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)contentType;
- (id)dictionaryValue;
- (id)connectionIdentifier;
- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:;
+ (id)instanceWithDictionary:;
@end
