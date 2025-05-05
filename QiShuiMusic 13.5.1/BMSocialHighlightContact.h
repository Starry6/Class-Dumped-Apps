@interface BMSocialHighlightContact : BMEventBase
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) NSString handle;
@property (nonatomic) BOOL isMe;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (BOOL)isMe;
- (id)proto;
- (id)handle;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isSignificant;
- (id)initWithHandle:isSignificant:isMe:;
+ (id)eventWithData:dataVersion:;
@end
