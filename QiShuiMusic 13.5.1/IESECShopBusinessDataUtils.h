@interface IESECShopBusinessDataUtils : NSObject
+ (id)generateSqlDataFromClient:userId:;
+ (void)modifyBusinessData:secShopId:userId:businessId:businessData:;
@end
