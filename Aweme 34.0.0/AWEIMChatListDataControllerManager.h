@interface AWEIMChatListDataControllerManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createBaseDataControllerFilter;
- (id)createBaseChildDataControllers;
+ (id)sharedIntance;
+ (id)__chatListDataControllerForIdentify:couldNullable:;
+ (id)chatListDataControllerForIdentify:;
+ (id)muteChatListDataController;
@end
