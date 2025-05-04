@interface AWELiveOpenURLImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canOpenURL:;
- (void)openURL:completionHandler:;
- (void)openURL:;
@end
