@interface CXSetSendingVideoCallAction : CXCallAction
@property (nonatomic) BOOL sendingVideo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)customDescription;
- (id)sanitizedCopyWithZone:;
- (BOOL)isSendingVideo;
- (void)setSendingVideo:;
- (void)updateCopy:withZone:;
- (id)initWithCallUUID:sendingVideo:;
+ (BOOL)supportsSecureCoding;
@end
