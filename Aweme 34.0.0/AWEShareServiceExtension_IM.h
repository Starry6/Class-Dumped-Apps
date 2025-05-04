@interface AWEShareServiceExtension_IM : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWithType:context:targetType:targetID:;
- (void)didConfigureShareView:withContext:;
- (void)didUpdateFeedVideoButton:;
- (void)p_showShareList:;
- (id)init;
- (void)dealloc;
@end
