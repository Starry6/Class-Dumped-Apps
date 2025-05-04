@interface AWELocoalGifCreater_GroupActiveMember : AWELocoalGifBaseCreater
@property (nonatomic) NSString gifTitle;
@property (nonatomic) AWELocoalGifCreaterContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canCreateWithIgnoreUser:;
- (void)setGifTitle:;
- (long long)__maxCountForUnclickedActiveGroupMemberGIF;
- (long long)__GIFIntervalInDays;
- (id)gifTitle;
- (void)createMessageWithCompletion:;
- (void).cxx_destruct;
@end
