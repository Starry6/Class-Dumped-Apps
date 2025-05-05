@interface IESECWindowHelper : NSObject
+ (id)decodeJsonString:;
+ (void)enterMyShopWithItemID:refer:entranceLocation:shopEnterMethod:whichAccount:extraData:taskBanner:splitBlocks:;
+ (void)enterNativeShopWithShopOwner:itemID:refer:entranceLocation:enterMethod:whichAccount:extraData:taskBanner:splitBlocks:;
+ (void)enterShopWithRequest:;
+ (void)enterShopWithShopOwner:itemID:refer:entranceLocation:enterMethod:whichAccount:extraData:taskBanner:splitBlocks:;
@end
