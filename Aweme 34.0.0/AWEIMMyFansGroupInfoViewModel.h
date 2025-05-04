@interface AWEIMMyFansGroupInfoViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString imageName;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString inviteButtonTitle;
@property (nonatomic) NSString inviteIconName;
- (id)initWithGroupTotalCount:memberTotalCount:;
- (id)sizeWithString:attributes:;
- (id)inviteIconName;
- (id)inviteButtonTitle;
- (void)setInviteButtonTitle:;
- (void)setInviteIconName:;
- (void)setDesc:;
- (id)desc;
- (void)setImageName:;
- (void).cxx_destruct;
- (id)title;
- (id)imageName;
- (void)setTitle:;
- (double)cellHeight;
@end
