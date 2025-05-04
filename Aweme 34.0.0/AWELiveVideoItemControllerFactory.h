@interface AWELiveVideoItemControllerFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pushVideoDetailListWithItems:programID:enterFrom:;
- (id)videoItemControllerWithID:;
- (void)pushVideoDetailControllerWithItemJSONString:extra:;
@end
