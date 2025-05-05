@interface HTSLiveMatchChatConfig : IESLivePBBaseMessage
@property (nonatomic) NSString mainGroupIconURL;
@property (nonatomic) NSString mainGroupBackgroundURL;
@property (nonatomic) NSString guestGroupIconURL;
@property (nonatomic) NSString guestGroupBackgroundURL;
@property (nonatomic) NSMutableArray aggregateIconURLArray;
@property (nonatomic) Q aggregateIconURLArray_Count;
+ (id)descriptor;
@end
