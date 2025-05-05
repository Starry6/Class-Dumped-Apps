@interface CATActiveIDSServiceConnectionContentRequestMissingData : NSObject
@property (nonatomic) Q expectedSequenceNumber;
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)contentType;
- (id)dictionaryValue;
- (id)initWithExpectedSequenceNumber:;
- (unsigned long long)expectedSequenceNumber;
+ (id)instanceWithDictionary:;
@end
