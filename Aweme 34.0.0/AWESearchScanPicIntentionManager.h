@interface AWESearchScanPicIntentionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBusiness;
- (void)getPicIntentionResultWithImage:completion:;
- (id)init;
+ (id)sharedInstance;
@end
