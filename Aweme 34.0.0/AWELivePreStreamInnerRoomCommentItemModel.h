@interface AWELivePreStreamInnerRoomCommentItemModel : NSObject
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) q msgId;
@property (nonatomic) NSString featuredChat;
@property (nonatomic) q eventTime;
@property (nonatomic) NSString guideText;
- (id)guideText;
- (void)setGuideText:;
- (id)featuredChat;
- (void)setFeaturedChat:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setEventTime:;
- (long long)eventTime;
- (long long)msgId;
- (void)setMsgId:;
@end
