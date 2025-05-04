@interface AWEIMPublishAtFriendsViewModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)supportMenuItemsWithMessage:shouldShowQuoteReplyMenuItem:shouldShowRecallMenuItem:;
+ (id)sharedIntance;
+ (BOOL)shouldShowRecallMenuItemWithMessage:;
@end
