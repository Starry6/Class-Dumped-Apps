@interface AWEUGSceneDesktopGuideConfig : NSObject
- (id)aNSObject;
- (id)aAWEUGKitModuleCommonAdapter;
- (id)handleResponseWithData:pitayaMessage:guideInfoInstance:;
- (id)formatActionScheme:pitayaMessage:;
- (id)handleHalfScreenAlertData:;
- (id)handleMediaHalfScreenAlertData:;
- (id)handleImageMediumScreenAlertData:guideInfoImageModel:;
- (id)handleShortcutSchema:pitayaMessage:;
+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;
@end
