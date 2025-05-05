@interface AVFileProcessor : NSObject
- (void)dealloc;
- (id)processPurchasedItem:withAttributes:resultInfo:progressBlock:;
- (id)rentalInfo:;
- (id)processPurchasedItem:withAttributes:;
- (id)processPurchasedItem:withAttributes:progressBlock:;
- (id)processPurchasedItem:withAttributes:resultInfo:;
- (id)sinfsFromFilePath:;
- (id)sinfInfoFromFilePath:;
+ (id)fileProcessor;
@end
