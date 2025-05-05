@interface CATActiveIDSServiceConnectionContentClose : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (id)init;
- (id)initWithError:;
- (long long)contentType;
- (void)setError:;
- (id)error;
- (id)dictionaryValue;
- (void).cxx_destruct;
+ (id)instanceWithDictionary:;
@end
