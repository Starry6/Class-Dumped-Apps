@interface CATInitializingIDSServiceConnectionContentReject : NSObject
@property (nonatomic) NSUUID connectionIdentifier;
@property (nonatomic) NSError error;
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)contentType;
- (void)setError:;
- (id)error;
- (id)dictionaryValue;
- (id)connectionIdentifier;
- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:error:;
+ (id)instanceWithDictionary:;
@end
