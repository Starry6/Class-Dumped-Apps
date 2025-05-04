@interface AWEOpenShareState : NSObject
@property (nonatomic) BOOL isFromThirdAppShareRequest;
- (void)setIsFromThirdAppShareRequest:;
- (BOOL)isFromThirdAppShareRequest;
+ (id)sharedInstance;
@end
