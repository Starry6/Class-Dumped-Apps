@interface BMSiriPrivateLearningSELFEvent : NSObject
@property (nonatomic) NSString uniqueId;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) NSData eventData;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)uniqueId;
- (id)proto;
- (id)json;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (BOOL)isCompleteWithContext:error:;
- (void)encodeWithCoder:;
- (id)initWithProto:;
- (void).cxx_destruct;
- (BOOL)isValidWithContext:error:;
- (id)serialize;
- (id)jsonDict;
- (id)eventData;
- (BOOL)isEqual:;
- (id)initWithUniqueId:absoluteTimestamp:eventData:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
