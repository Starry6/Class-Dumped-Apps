@interface IESSaaSTIMOConversationUnReadInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isMute;
@property (nonatomic) Q unreadCount;
@property (nonatomic) Q anotherUnreadCount;
- (unsigned long long)anotherUnreadCount;
- (void)setAnotherUnreadCount:;
- (void)setIsMute:;
- (unsigned long long)unreadCount;
- (id)identifier;
- (void)setUnreadCount:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (BOOL)isMute;
@end
