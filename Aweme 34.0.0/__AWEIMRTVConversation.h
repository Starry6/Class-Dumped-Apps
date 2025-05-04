@interface __AWEIMRTVConversation : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString avatarString;
@property (nonatomic) BOOL online;
@property (nonatomic) q lastActiveTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLastActiveTime:;
- (id)avatarString;
- (void)setAvatarString:;
- (id)initWithIdentifier:name:avatarString:;
- (void)setOnline:;
- (void)setIdentifier:;
- (BOOL)online;
- (id)identifier;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)lastActiveTime;
@end
