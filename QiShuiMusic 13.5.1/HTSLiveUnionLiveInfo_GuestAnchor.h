@interface HTSLiveUnionLiveInfo_GuestAnchor : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString tag;
@property (nonatomic) NSInteger status;
+ (id)descriptor;
@end
