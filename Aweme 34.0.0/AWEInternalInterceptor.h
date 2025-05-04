@interface AWEInternalInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)checkRequest:isClickJump:model:error:;
+ (BOOL)checkAllowToJumpToIronMan:currentURL:;
@end
