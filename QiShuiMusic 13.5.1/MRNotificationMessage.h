@interface MRNotificationMessage : MRProtocolMessage
@property (nonatomic) NSString notification;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) MRPlayerPath playerPath;
- (id)userInfo;
- (id)notification;
- (unsigned long long)type;
- (id)playerPath;
- (id)initWithNotification:;
@end
