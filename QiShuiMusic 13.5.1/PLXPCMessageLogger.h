@interface PLXPCMessageLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)connection:handleInvocation:isReply:;
+ (BOOL)enabled;
@end
