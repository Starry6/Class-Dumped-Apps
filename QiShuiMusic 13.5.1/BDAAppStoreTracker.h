@interface BDAAppStoreTracker : NSObject
+ (void)trackWithEvent:data:;
+ (void)trackWithEvent:label:appleID:adID:logExtra:extraParam:;
+ (void)trackWithEvent:label:appleID:adID:logExtra:extraParam:completion:;
@end
