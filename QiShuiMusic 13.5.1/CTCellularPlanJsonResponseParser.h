@interface CTCellularPlanJsonResponseParser : NSObject
+ (id)sessionIdFromObject:;
+ (id)sessionIdFromJsonData:;
+ (BOOL)parseCreateSessionResponseData:intoSessionId:podId:urls:error:;
+ (BOOL)parseHandoffTokenResponseData:intoHandoffToken:error:;
+ (BOOL)parseInitiatePurchaseResponseData:intoShouldPurchase:responseCode:responseText:buddyML:error:;
+ (BOOL)parsePurchaseResponseData:intoShouldDownloadProfile:iccid:responseCode:responseText:error:;
+ (BOOL)parseSubscriptionsResponseData:intoSubscriptions:error:;
+ (BOOL)parseCountryListResponseData:intoSupportedCountryList:intoUnsupportedCountryList:error:;
+ (BOOL)parseResponseJson:setUrl:setParameters:;
@end
