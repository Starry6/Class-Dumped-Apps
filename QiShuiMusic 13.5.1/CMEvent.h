@interface CMEvent : NSObject
@property (nonatomic) Q eventType;
@property (nonatomic) double timestamp;
@property (nonatomic) NSString peerDisplayName;
@property (nonatomic) NSUUID uuid;
- (id)uuid;
- (void)setUuid:;
- (unsigned long long)eventType;
- (void)setEventType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setPeerDisplayName:;
- (id)peerDisplayName;
+ (BOOL)supportsSecureCoding;
@end
