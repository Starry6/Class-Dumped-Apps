@interface MRSupportedProtocolMessages : NSObject
@property (nonatomic) Q lastSupportedMessageType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)lastSupportedMessageType;
- (id)initWithAllSupportedMessages;
- (id)initWithLastSupportedMessageType:;
- (BOOL)isSupported:;
+ (BOOL)supportsSecureCoding;
@end
