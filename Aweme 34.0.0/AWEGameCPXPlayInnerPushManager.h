@interface AWEGameCPXPlayInnerPushManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPushIfNeeded:completion:;
- (void)queueDidFinishPush:completion:;
@end
