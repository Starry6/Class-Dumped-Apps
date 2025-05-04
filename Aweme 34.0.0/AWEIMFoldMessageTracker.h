@interface AWEIMFoldMessageTracker : NSObject
+ (void)trackRiskMessageClick:context:;
+ (void)trackRiskMessageWaringShow:context:;
+ (void)trackRiskMessagePopShow:;
+ (void)trackRiskMessagePopClick:position:;
+ (void)p_trackRiskMessageShow:context:;
+ (void)p_trackRiskMessageClick:context:;
+ (id)linkTypesForMessage:;
+ (id)convertRoleIDsToString:;
+ (id)p_commonParamsForMessage:context:;
+ (void)trackRiskMessageShow:context:;
+ (void)trackChatContactInfoClick:context:highlight:;
@end
