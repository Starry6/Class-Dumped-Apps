@interface AWEIMConcernBackSendMsgABTestManager : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)curType;
- (unsigned long long)_concernBackSendMsgTypeWithABTestStyle:;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)showText;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end
