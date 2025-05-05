@interface AAMessagesInviteContext : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString action;
@property (nonatomic) NSURL inviteURL;
@property (nonatomic) NSArray recipients;
@property (nonatomic) NSString messageBody;
@property (nonatomic) NSString secondaryTitle;
- (id)recipients;
- (void)setRecipients:;
- (id)action;
- (id)messageBody;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setAction:;
- (id)title;
- (void).cxx_destruct;
- (void)setSecondaryTitle:;
- (id)secondaryTitle;
- (id)description;
- (id)subtitle;
- (void)setMessageBody:;
- (id)inviteURL;
- (void)setInviteURL:;
@end
