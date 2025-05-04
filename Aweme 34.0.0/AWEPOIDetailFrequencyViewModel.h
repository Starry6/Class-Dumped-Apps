@interface AWEPOIDetailFrequencyViewModel : NSObject
+ (BOOL)isFrequencyReadyWithConstData:;
+ (BOOL)getShowFrequency:showKey:setKey:constData:;
+ (BOOL)locationAuthorizationRequestTimeInterval:showKey:;
@end
