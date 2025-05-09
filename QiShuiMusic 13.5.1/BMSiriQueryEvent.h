@interface BMSiriQueryEvent : NSObject
@property (nonatomic) NSString uniqueId;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) NSString query;
@property (nonatomic) NSArray results;
@property (nonatomic) NSString contentProtection;
@property (nonatomic) NSString domainId;
@property (nonatomic) NSString bundleId;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)init;
- (id)uniqueId;
- (id)proto;
- (id)json;
- (id)encodeAsProto;
- (double)absoluteTimestamp;
- (id)query;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (BOOL)isCompleteWithContext:error:;
- (void)encodeWithCoder:;
- (id)initWithProto:;
- (id)results;
- (void).cxx_destruct;
- (id)contentProtection;
- (BOOL)isValidWithContext:error:;
- (id)serialize;
- (id)jsonDict;
- (BOOL)isEqual:;
- (id)initWithUniqueId:absoluteTimestamp:query:results:contentProtection:;
- (id)initWithUniqueId:absoluteTimestamp:query:results:;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
@end
