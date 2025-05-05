@interface CATActiveServiceConnectionIDSMessage : NSObject
@property (nonatomic) NSUUID connectionIdentifier;
@property (nonatomic) NSNumber receivedSequenceNumber;
@property (nonatomic) <CATActiveIDSServiceConnectionMessageContent> content;
@property (nonatomic) q messageType;
@property (nonatomic) NSDictionary dictionaryValue;
- (id)content;
- (long long)messageType;
- (id)dictionaryValue;
- (id)connectionIdentifier;
- (void).cxx_destruct;
- (id)receivedSequenceNumber;
- (id)initWithConnectionIdentifier:receivedSequenceNumber:content:;
+ (id)instanceWithDictionary:;
@end
