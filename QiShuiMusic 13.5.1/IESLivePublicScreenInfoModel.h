@interface IESLivePublicScreenInfoModel : NSObject
@property (nonatomic) NSNumber associatedRoomID;
@property (nonatomic) Q type;
@property (nonatomic) NSNumber publicScreenID;
@property (nonatomic) q bindMultiTab;
@property (nonatomic) BOOL isOwner;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) NSArray topUserArray;
@property (nonatomic) NSNumber memberCount;
@property (nonatomic) NSNumber unreadMsgCount;
@property (nonatomic) HTSLiveImage background;
- (void)setMemberCount:;
- (id)associatedRoomID;
- (long long)bindMultiTab;
- (id)initWithType:publicScreenID:;
- (id)publicScreenID;
- (void)setAssociatedRoomID:;
- (void)setBindMultiTab:;
- (void)setPublicScreenID:;
- (void)setTopUserArray:;
- (void)setUnreadMsgCount:;
- (id)topUserArray;
- (id)unreadMsgCount;
- (id)background;
- (void)setName:;
- (void)setBackground:;
- (id)memberCount;
- (id)icon;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isOwner;
- (void)setIsOwner:;
@end
