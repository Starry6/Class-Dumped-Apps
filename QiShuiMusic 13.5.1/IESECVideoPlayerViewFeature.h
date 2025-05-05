@interface IESECVideoPlayerViewFeature : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoPlayerViewWithRequest:;
- (id)init;
- (void)dealloc;
+ (id)shared;
@end
