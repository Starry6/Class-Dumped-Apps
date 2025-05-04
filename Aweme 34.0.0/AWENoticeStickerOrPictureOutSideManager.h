@interface AWENoticeStickerOrPictureOutSideManager : NSObject
- (BOOL)getFriendStateWithUserID:;
- (void)clearFriendStateDic;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)shouldShowStickerOutSide:;
+ (BOOL)shouldCommentNoticeShowStickerOutSide:;
+ (BOOL)needExposedDisplayMediaDetailWithUserModel:;
+ (id)getStickerOrPictureURL:;
+ (id)getStickerOrPictureViewSize:;
+ (id)deleteColonFromString:noticeModel:;
+ (id)sharedInstance;
@end
