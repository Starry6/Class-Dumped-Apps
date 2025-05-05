@interface SwitchChannelInviteResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary mixNotAllowMap;
@property (nonatomic) GPBStringBoolDictionary notAllowMap;
@property (nonatomic) Q notAllowMap_Count;
@property (nonatomic) BOOL isFailure;
@property (nonatomic) NSString toast;
@property (nonatomic) q waitSec;
- (id)mixNotAllowMap;
+ (id)descriptor;
@end
