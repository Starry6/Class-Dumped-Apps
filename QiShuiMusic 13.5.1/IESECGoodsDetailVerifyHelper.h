@interface IESECGoodsDetailVerifyHelper : NSObject
+ (id)configWithType:;
+ (void)verifySchema:type:additions:callBackDelegate:success:error:;
@end
