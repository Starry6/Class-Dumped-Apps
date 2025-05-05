@interface IESECLiveAfterLiveCardProviderImpl : NSObject
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (id)afterLiveCardWithData:container:;
- (id)liveContext;
- (void)setTracker:;
- (id)tracker;
- (void).cxx_destruct;
@end
