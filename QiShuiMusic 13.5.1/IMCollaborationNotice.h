@interface IMCollaborationNotice : NSObject
@property (nonatomic) NSString guidString;
@property (nonatomic) NSString senderHandle;
@property (nonatomic) IMCollaborationNoticeMetadata metadata;
@property (nonatomic) NSDate date;
- (id)metadata;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setMetadata:;
- (id)date;
- (void)encodeWithCoder:;
- (id)senderHandle;
- (void).cxx_destruct;
- (void)setDate:;
- (void)setSenderHandle:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)guidString;
- (void)setGuidString:;
- (BOOL)wantsEphemeralDismissal;
- (id)initWithGUIDString:sender:metadata:date:;
+ (BOOL)supportsSecureCoding;
+ (id)noticeWithGUIDString:sender:metadata:date:;
@end
