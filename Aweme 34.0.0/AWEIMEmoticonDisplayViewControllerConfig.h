@interface AWEIMEmoticonDisplayViewControllerConfig : NSObject
@property (nonatomic) AWEIMSimilarEmojiDisplayModel displayEmoticonModel;
@property (nonatomic) BOOL findSimilarEmoticon;
@property (nonatomic) BOOL hasSimilarEmoticonData;
@property (nonatomic) NSDictionary trackInfos;
@property (nonatomic) Q scene;
@property (nonatomic) Q triggerType;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) AWEIMHalfScreenContainerViewController containerVC;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMSimilarEmoticonDisplayViewProtocol> similarDelegate;
@property (nonatomic) <AWEIMQuickLookCollectionViewCellEventProtocol> quickLookCellEvent;
@property (nonatomic) <AWEIMSendSimilarEmoticonProtocol> sendEmoticonDelegate;
@property (nonatomic) NSIndexPath selectIndexPath;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? sendEmojiBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContainerVC:;
- (id)containerVC;
- (void)setTrackInfos:;
- (void)setSendEmojiBlock:;
- (void)setDisplayEmoticonModel:;
- (id)displayEmoticonModel;
- (void)setFindSimilarEmoticon:;
- (void)setSelectIndexPath:;
- (id)selectIndexPath;
- (BOOL)findSimilarEmoticon;
- (BOOL)hasSimilarEmoticonData;
- (void)setHasSimilarEmoticonData:;
- (id)similarDelegate;
- (void)setSimilarDelegate:;
- (id)quickLookCellEvent;
- (void)setQuickLookCellEvent:;
- (id)sendEmoticonDelegate;
- (void)setSendEmoticonDelegate:;
- (id)sendEmojiBlock;
- (void)setScene:;
- (id)message;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (void)setTriggerType:;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)trackInfos;
@end
