@interface IESSaaSTIMMessageUpdater : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestAllFailedMessageProperty;
- (void)modifyPropertyItemsForMessage:inConversation:modifyProperties:force:;
- (void)recallMessage:inConversation:role:completion:;
- (void)requestAllMessageProperty;
- (void)requestMessagePropertyWithStatusArray:;
- (void)requestPropertyItemForMessage:inConversation:arrNewPropertyModify:allowRefreshTicket:;
- (id)init;
+ (id)sharedInstance;
@end
