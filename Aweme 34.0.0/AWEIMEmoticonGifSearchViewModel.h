@interface AWEIMEmoticonGifSearchViewModel : NSObject
+ (void)clearSearchResult;
+ (id)processStickModel:error:;
+ (id)changeResponseToEmotionModel:logID:;
+ (id)changeResponseModel:;
+ (id)requestWithSearchString:index:conversationID:searchKeyID:source:offset:completion:;
+ (id)requestEmoticonByRecInterfaceWithOffset:completion:;
+ (id)currentSearchResult;
+ (void)saveSearchResult:;
@end
