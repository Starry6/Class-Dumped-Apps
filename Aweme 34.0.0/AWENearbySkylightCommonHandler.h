@interface AWENearbySkylightCommonHandler : NSObject
@property (nonatomic) q pageType;
@property (nonatomic) <AWENearbySkyLightElementViewActionDelegate> delegate;
- (void)unregisterSubscriber;
- (id)initWithPageType:;
- (void)registerSubscribes;
- (void)__handleBroadCastNotification:;
- (void)dealloc;
- (id)delegate;
- (void)setPageType:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)pageType;
@end
