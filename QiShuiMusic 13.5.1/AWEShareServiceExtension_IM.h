@interface AWEShareServiceExtension_IM : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didConfigureShareView:withContext:;
- (void)didCreateViewController:;
- (void)p_showShareList:;
- (void)shareWithType:context:targetType:targetID:;
- (id)init;
- (void)dealloc;
@end
