@interface AWEFeedVendorRouter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)transToXiguaPersonalPageWithParams:awemeModel:enterFrom:enterMethod:;
+ (void)transToXiguaPersonalPageWithParams:awemeModel:scene:launchFrom:location:enterFrom:enterMethod:;
+ (void)trackEnterPersonalDetailWithModel:enterFrom:enterMethod:;
@end
