@interface AWEECOMIMResourceService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ecomim_imageNamed:;
+ (id)ecomim_offlineImageNamed:;
+ (void)ecomim_imageView:offlineImageNamed:;
+ (void)ecomim_button:setOfflineImageNamed:forState:;
+ (void)ecomim_button:setOfflineBackgroundImageNamed:forState:;
+ (void)ecomim_imageView:offlineImageNamed:theme:;
+ (void)ecomim_button:setOfflineImageNamed:forState:theme:;
+ (void)ecomim_button:setOfflineBackgroundImageNamed:forState:theme:;
@end
