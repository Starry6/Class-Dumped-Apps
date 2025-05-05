@interface BFWebViewAppLinkResolver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appLinkFromALData:destination:;
- (id)appLinkFromURLInBackground:;
- (id)followRedirects:;
- (void)getALDataFromLoadedPage:completion:;
- (id)parseALData:;
+ (id)sharedInstance;
@end
