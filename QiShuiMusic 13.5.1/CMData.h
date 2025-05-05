@interface CMData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) q type;
@property (nonatomic) NSData data;
@property (nonatomic) NSData additionalData;
@property (nonatomic) NSString sourcePeerDisplayName;
@property (nonatomic) BOOL isSent;
- (id)data;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (long long)type;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setData:;
- (BOOL)isSent;
- (id)additionalData;
- (void)setIsSent:;
- (void)setSourcePeerDisplayName:;
- (void)setAdditionalData:;
- (id)initWithMessage:timestamp:isSent:;
- (id)sourcePeerDisplayName;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
