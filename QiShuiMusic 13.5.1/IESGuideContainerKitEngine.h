@interface IESGuideContainerKitEngine : NSObject
@property (nonatomic) IESLiveStackTemplate provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addViewElement:;
- (BOOL)addView:viewType:;
- (BOOL)addView:viewType:insets:size:;
- (BOOL)addView:viewType:size:;
- (void)bindContainerProvider:;
- (id)queryContainerByType:;
- (id)queryViewByType:;
- (void)removeViewElement:;
- (void)setProvider:;
- (id)init;
- (id)provider;
- (void).cxx_destruct;
@end
