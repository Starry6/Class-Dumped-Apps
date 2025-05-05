@interface SANotificationOnDeviceObject : SANotificationObject
@property (nonatomic) NSString announcementType;
@property (nonatomic) NSString body;
@property (nonatomic) NSData request;
@property (nonatomic) NSString senderHandle;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (id)body;
- (id)announcementType;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)request;
- (void)setBody:;
- (id)title;
- (id)senderHandle;
- (id)encodedClassName;
- (id)subtitle;
- (void)setSenderHandle:;
- (void)setRequest:;
- (void)setAnnouncementType:;
@end
