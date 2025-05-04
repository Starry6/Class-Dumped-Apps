@interface AWEIMShareAndForwardToChatImplFactory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareImplOfForwardMessage:;
- (id)shareImplOfShareContext:;
- (id)shareImplOfGroupCommand;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
