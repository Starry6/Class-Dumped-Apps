@interface IESECAddressServiceNetworking : NSObject
+ (id)convertChangeTypeToStr:;
+ (id)convertEventTypeToStr:;
+ (id)convertResponseToServiceModel:serverTime:;
+ (void)fetchCurrentAddressWithChangeType:addressInfo:completion:;
+ (void)fetchSessionAddressWithAddressId:addressType:completion:;
+ (void)reportAddressWithAddress:eventType:completion:;
+ (void)reportGetAddressNetError:changeType:;
@end
