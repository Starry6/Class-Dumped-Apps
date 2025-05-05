@interface CATActiveIDSServiceConnectionContentRetransmit : NSObject
@property (nonatomic) NSArray sequenceNumbers;
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)contentType;
- (id)dictionaryValue;
- (void).cxx_destruct;
- (id)initWithSequenceNumbers:;
- (id)sequenceNumbers;
+ (id)instanceWithDictionary:;
@end
