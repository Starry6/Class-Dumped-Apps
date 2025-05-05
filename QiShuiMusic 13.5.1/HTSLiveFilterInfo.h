@interface HTSLiveFilterInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL canShow;
@property (nonatomic) NSString filterReason;
+ (id)descriptor;
@end
