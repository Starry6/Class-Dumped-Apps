@interface IESECGoodsFeedDataChecker : NSObject
+ (void)checkEntranceInfoInnerWithEnterFrom:enterTo:entranceInfoDict:;
+ (void)checkEntranceInfoWithEnterFrom:enterTo:entranceInfo:;
+ (void)reportErrorWithEnterFrom:enterTo:error:;
@end
