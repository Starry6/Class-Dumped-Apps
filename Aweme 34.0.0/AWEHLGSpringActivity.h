@interface AWEHLGSpringActivity : NSObject
+ (void)injectActivityInfoToShareModelIfNeed:uniqueID:;
+ (void)updateShareSpringTaskStatusIfNeedWithUniqueID:model:channel:groupID:;
+ (id)tryToGetPublishModelForRedPacketWithExtra:;
@end
