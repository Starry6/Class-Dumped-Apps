@interface AWEIMStrangerBoxChatDataUtilManager : NSObject
@property (nonatomic) BOOL isInStrangerBox;
- (id)getStrangerBizInfo;
- (BOOL)isInStrangerBox;
- (void)setIsInStrangerBox:;
+ (id)sharedManager;
@end
