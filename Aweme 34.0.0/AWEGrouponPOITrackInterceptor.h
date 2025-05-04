@interface AWEGrouponPOITrackInterceptor : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:btmInfo:;
- (BOOL)enableVerify;
- (BOOL)enableVerifyOutGroupon;
- (id)trackVerifySettings;
- (id)newTrackParamsWithEvent:oldParams:btmInfo:;
- (unsigned long long)type;
@end
