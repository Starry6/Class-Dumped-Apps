@interface AWESearchAIGCCardStatusManager : NSObject
@property (nonatomic) NSMutableDictionary AICardStatusDict;
@property (nonatomic) <AWESearchAIGCCardStatusManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)replaceToLynxWithStatus:;
- (void)handleBytesyncData:;
- (void)handleSSEData:;
- (void)setAICardStatusDict:;
- (id)getAICardStatusWithCardID:;
- (id)AICardStatusDict;
- (void)replaceToLynxWithCardStatus:completionBlock:;
- (void)handleSteamDataWithCardID:searchID:dataList:needFallback:;
- (void)addAICardStatusFromViewModels:;
- (id)getAICardStatusListWithSearchID:;
- (void)replaceToLynxIfNeeded;
- (void)replaceToLynxIfNeededCompletionBlock:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
