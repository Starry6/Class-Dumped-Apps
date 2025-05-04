@interface AWESiriSuggestHelper : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)donateUserActivityWithType:pushConfigModel:userInfo:uniqueIDIfNeeded:completion:;
- (void)donateUserActivityWithType:siriConfigModel:userInfo:completion:;
- (void)clearAllSiriSuggestData;
- (void)clearSiriSuggestDataWithIdentifier:;
- (void)clearSiriSuggestDataWithType:expiredIDs:;
- (void)clearSiriSuggestDataWithExpiredDataList:;
+ (id)userActivityWithType:title:eligibleForSearch:eligibleForHandoff:eligibleForPrediction:contentDescription:uniqueIDIfNeeded:userInfo:;
+ (id)userActivityWithSceneType:userInfo:uniqueIDIfNeeded:configModel:;
+ (id)userActivityWithSceneType:userInfo:siriConfigModel:;
@end
