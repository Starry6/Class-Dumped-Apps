@interface EMBiomeEvent : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString messageId;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)payload;
- (id)messageId;
- (id)json;
- (id)initWithCoder:;
- (unsigned int)dataVersion;
- (void)encodeWithCoder:;
- (id)eventName;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithEventName:messageId:payload:;
+ (id)eventWithData:dataVersion:;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
