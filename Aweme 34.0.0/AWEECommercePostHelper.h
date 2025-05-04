@interface AWEECommercePostHelper : NSObject
@property (nonatomic) AWEECHalfPostDataController postDataController;
@property (nonatomic) <ACCPublishServiceProtocol> publishService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)task:needResetWithInfo:;
- (void)setPostDataController:;
- (void)publishEventPostCommentVideoWithParams:;
- (void)setPublishService:;
- (id)postDataController;
- (id)publishService;
- (void)dealloc;
- (void).cxx_destruct;
@end
