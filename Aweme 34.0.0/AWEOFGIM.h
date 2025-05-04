@interface AWEOFGIM : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)joinGroupChatWithBizExt:sourceType:enterFrom:trackDictionary:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)joinConversation:shortId:bizExtension:completion:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)openTransferToAppInternalVCWithContext:authorShareNotPublicAweme:enterMethod:multiSelectedItems:replayContent:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)transferToFullScreenAllFriendsListWithInviteBlock:dismissFinishBlock:disableToast:ofgClientKey:ofgAppID:ofgError:;
+ (id)userWithSecUid:ofgClientKey:ofgAppID:ofgError:;
+ (BOOL)sendMessageWithParams:completionBlock:ofgClientKey:ofgAppID:ofgError:;
@end
