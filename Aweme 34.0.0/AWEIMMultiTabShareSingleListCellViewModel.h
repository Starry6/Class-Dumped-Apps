@interface AWEIMMultiTabShareSingleListCellViewModel : NSObject
@property (nonatomic) NSString nickname;
@property (nonatomic) NSURL avatarURL;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) @? sendBlock;
@property (nonatomic) BOOL hasClick;
- (id)avatarURL;
- (void)setAvatarURL:;
- (BOOL)hasClick;
- (void)setHasClick:;
- (id)nickname;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setNickname:;
- (id)sendBlock;
- (void)setSendBlock:;
@end
