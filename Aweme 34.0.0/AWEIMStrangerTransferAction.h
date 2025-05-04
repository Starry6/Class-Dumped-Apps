@interface AWEIMStrangerTransferAction : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)gotoProfileViewControllerWithChatModel:;
+ (void)gotoMessageListViewControllerWithChatModel:cellVM:tracker:strangerChatDataManager:rootViewController:;
@end
