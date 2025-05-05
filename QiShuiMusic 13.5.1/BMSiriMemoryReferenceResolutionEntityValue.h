@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) NSData valueData;
- (id)initWithProtoData:;
- (id)proto;
- (id)valueData;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithTimestamp:valueData:;
@end
