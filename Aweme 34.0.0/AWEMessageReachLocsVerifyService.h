@interface AWEMessageReachLocsVerifyService : NSObject
+ (BOOL)isCurrentTopScene;
+ (BOOL)homepageLocsVerify:;
+ (BOOL)handleLocVerify:extraInfo:;
+ (id)locVerifyHandlerRegistry;
+ (id)getHomepageTabID;
+ (id)getMatchLocsIdentifierWithLocsArray:;
@end
