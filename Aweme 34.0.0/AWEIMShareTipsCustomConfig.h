@interface AWEIMShareTipsCustomConfig : NSObject
@property (nonatomic) Q type;
@property (nonatomic) <AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) BOOL directOpenNewCreateGroupConversation;
@property (nonatomic) double delayTime;
@property (nonatomic) NSString title;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString schema;
- (id)trackParams;
- (void)setTrackParams:;
- (id)shareImpl;
- (void)setShareImpl:;
- (void)setDirectOpenNewCreateGroupConversation:;
- (BOOL)directOpenNewCreateGroupConversation;
- (id)schema;
- (id)init;
- (void)setSchema:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setDelayTime:;
- (id)title;
- (double)delayTime;
- (void)setTitle:;
- (id)buttonTitle;
- (void)setButtonTitle:;
@end
