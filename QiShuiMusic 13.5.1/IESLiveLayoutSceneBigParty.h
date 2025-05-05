@interface IESLiveLayoutSceneBigParty : NSObject
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) <IESLiveLayoutViewProvider> provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bigPartyGuestListViewFrame;
- (void)layoutAnchorEmojiContainer;
- (void)layoutPluginIfNeed;
- (void)setIsAnchor:;
- (void)setProvider:;
- (unsigned long long)currentScene;
- (BOOL)isAnchor;
- (id)provider;
- (void).cxx_destruct;
@end
