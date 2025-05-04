@interface AWEIMCommerceShopGuideInfoManager : NSObject
@property (nonatomic) AWEIMCommerceShopGuideInfo shopGuideInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)shopGuideInfo;
- (void)setShopGuideInfo:;
- (void)__clearCache;
- (void)fetchShopGuideInfoWithSecUID:completion:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
