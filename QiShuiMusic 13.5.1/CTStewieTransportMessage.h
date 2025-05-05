@interface CTStewieTransportMessage : NSObject
@property (nonatomic) NSString msgId;
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary metadata;
- (id)init;
- (id)data;
- (id)metadata;
- (id)initWithCoder:;
- (void)setMetadata:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMsgId:;
- (BOOL)isEqualToTransportMessage:;
- (id)msgId;
- (void)setMsgId:;
+ (BOOL)supportsSecureCoding;
+ (id)allowedSetOfClasses;
@end
