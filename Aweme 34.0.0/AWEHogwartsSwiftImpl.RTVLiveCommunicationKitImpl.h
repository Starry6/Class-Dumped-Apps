@interface AWEHogwartsSwiftImpl.RTVLiveCommunicationKitImpl : HTSService
@property (nonatomic) <RTVLiveCommunicationKitDelegate> delegate;
- (void)reportEnd:reason:;
- (void)syncUserActionToSystem:;
- (void)reportWithContext:;
- (id)currentDisplayingRoomIDs;
- (BOOL)isCurrentRoomIDDisplaying:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)isDisplaying;
@end
