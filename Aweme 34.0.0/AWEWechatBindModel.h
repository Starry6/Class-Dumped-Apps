@interface AWEWechatBindModel : MTLModel
@property (nonatomic) BOOL isBindWechat;
@property (nonatomic) NSString finalJumpURL;
@property (nonatomic) Q jumpType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)jumpType;
- (void)setJumpType:;
- (BOOL)isBindWechat;
- (void)setIsBindWechat:;
- (id)finalJumpURL;
- (void)setFinalJumpURL:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
