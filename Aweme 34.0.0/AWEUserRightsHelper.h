@interface AWEUserRightsHelper : NSObject
+ (void)resolveUserVerifyDataWithModel:resolveHandler:;
+ (long long)verifyGeneralType:;
+ (long long)verifyTypeWithInfo:;
+ (BOOL)isUserVerified:;
+ (void)resolveUserVerifyDataWithType:needIconBg:resolveHandler:;
+ (BOOL)shouldMapOldOrNewIcon;
@end
