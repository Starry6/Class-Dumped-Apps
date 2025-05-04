@interface AWEPayCommonUtil : NSObject
+ (BOOL)isPPEEnv;
+ (double)currentServerTime;
+ (id)currentNetType;
+ (id)awe_redPacketInfo:;
+ (void)setAwe_redPacketInfo:msg:;
+ (id)getDisplayNameWithUid:secUid:conversationId:;
+ (id)defaultRedPacketTitleWithFansCreatorStyle:;
+ (long long)followStatusWithUserId:;
+ (void)transferToUserProfileWitUserID:;
+ (BOOL)isBOEEvn;
+ (id)boeSuffix;
+ (BOOL)awepay_isAuthorService:;
+ (void)userIDWithSecUserID:conversationId:completion:;
+ (id)sendSchemaParams;
+ (id)getUserModelWithUid:secUid:;
+ (long long)appVersionCom:;
+ (void)processRouterWith:;
+ (void)openSchema:callback:;
+ (void)saveCJPayCache:key:;
+ (id)merchantIDWithProductType:;
+ (void)transferToUrlString:;
+ (void)showCJPayLoading;
+ (void)hideCJPayLoading;
+ (void)showCJPaySecurityLoading;
+ (BOOL)isVersionInMinVer:maxVer:;
@end
