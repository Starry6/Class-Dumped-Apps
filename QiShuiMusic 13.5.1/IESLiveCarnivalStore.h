@interface IESLiveCarnivalStore : NSObject
@property (nonatomic) HTSLiveGeneralCarnivalMessage cacheGeneralCarnival;
@property (nonatomic) IESLiveGeneralCarnivalMessageView generalCarnivalMessageView;
@property (nonatomic) BOOL addDanmakuEnabled;
@property (nonatomic) BOOL degradeForCarnival;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleSyncData:;
- (BOOL)addDanmakuEnabled;
- (id)cacheGeneralCarnival;
- (BOOL)chatCarnivalEnable;
- (void)cleanMessageWithSeekByUser;
- (BOOL)degradeForCarnival;
- (void)didSetAttachingDIContext;
- (BOOL)enableProcessGeneralCarnival:;
- (id)generalCarnivalMessageView;
- (void)generalCarnivalSpecialContentShow:;
- (void)generalCarnivalWillAppear:withMsg:;
- (void)handleChatCarnivalMessageWithConfig:;
- (void)handleGeneralCarnivalMessageWithConfig:;
- (void)messageReceived:source:;
- (void)setAddDanmakuEnabled:;
- (void)setCacheGeneralCarnival:;
- (void)setDegradeForCarnival:;
- (void)setGeneralCarnivalMessageView:;
- (void)subscribedSyncDataUpdatedWithValue:oldVersion:newVersion:;
- (void)subscribedSyncDataWithValue:version:;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
