@interface CNGeminiChannel : NSObject
@property (nonatomic) NSString channelIdentifier;
@property (nonatomic) NSString localizedLabel;
@property (nonatomic) NSString localizedBadgeLabel;
@property (nonatomic) NSString handle;
@property (nonatomic) TUSenderIdentity senderIdentity;
@property (nonatomic) BOOL available;
- (id)handle;
- (id)initWithCoder:;
- (BOOL)isAvailable;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)localizedLabel;
- (id)localizedBadgeLabel;
- (id)senderIdentity;
- (id)channelIdentifier;
+ (BOOL)supportsSecureCoding;
@end
