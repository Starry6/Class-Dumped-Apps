@interface CATActiveIDSServiceConnectionContentSendData : NSObject
@property (nonatomic) NSNumber sequenceNumber;
@property (nonatomic) Q dataNumber;
@property (nonatomic) Q segmentNumber;
@property (nonatomic) Q totalSegments;
@property (nonatomic) NSData dataSegment;
@property (nonatomic) q contentType;
@property (nonatomic) NSDictionary dictionaryValue;
- (long long)contentType;
- (id)dictionaryValue;
- (id)sequenceNumber;
- (void).cxx_destruct;
- (unsigned long long)dataNumber;
- (id)initWithSequenceNumber:dataNumber:dataSegment:segmentRange:segmentNumber:totalSegments:;
- (id)dataSegment;
- (unsigned long long)segmentNumber;
- (unsigned long long)totalSegments;
+ (id)instanceWithDictionary:;
@end
