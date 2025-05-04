@interface AWELiveShelfCommonUtil : NSObject
+ (id)shelfShowErrorMsgWithType:;
+ (id)netErrorMsgWithCode:;
+ (double)shelfHeightPercentage;
+ (id)webviewSchemaString:joinParameters:;
+ (id)webviewUrlString:joinParameters:;
+ (double)iPadShelfHeight;
+ (id)updateMPSchemaListWithCardList:mpParam:;
+ (double)getLiveShelfSafeAreaBottom;
+ (long long)shelfExtensionHeight;
+ (id)lynxSchema:joinParameters:;
+ (void)transferToURLString:parameter:;
+ (void)preloadMPSchemaListWithCardList:trackerParameter:;
+ (id)getUpdateIndexesWithCardList:updatedCardData:;
@end
