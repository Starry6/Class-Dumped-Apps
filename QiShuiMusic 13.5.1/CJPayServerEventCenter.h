@interface CJPayServerEventCenter : NSObject
- (void)postEvent:intergratedMerchantId:extra:completion:;
+ (id)defaultCenter;
@end
