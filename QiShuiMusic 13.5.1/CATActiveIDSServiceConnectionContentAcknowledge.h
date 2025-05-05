@interface CATActiveIDSServiceConnectionContentAcknowledge : NSObject
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)contentType;
- (id)dictionaryValue;
+ (id)instanceWithDictionary:;
@end
