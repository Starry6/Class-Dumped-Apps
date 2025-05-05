@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject
@property (nonatomic) NSString largeMessagePath;
@property (nonatomic) NSData serializedDataUploadMessage;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithLargeMessagePath:serializedDataUploadMessage:;
- (id)largeMessagePath;
- (id)serializedDataUploadMessage;
+ (BOOL)supportsSecureCoding;
@end
