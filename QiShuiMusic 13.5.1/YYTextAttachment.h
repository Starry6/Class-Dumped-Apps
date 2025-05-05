@interface YYTextAttachment : NSObject
@property (nonatomic) @ content;
@property (nonatomic) q contentMode;
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
@property (nonatomic) NSDictionary userInfo;
- (id)content;
- (void)setContent:;
- (void)setContentInsets:;
- (id)contentInsets;
- (id)userInfo;
- (long long)contentMode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)setContentMode:;
- (id)copyWithZone:;
+ (id)attachmentWithContent:;
@end
