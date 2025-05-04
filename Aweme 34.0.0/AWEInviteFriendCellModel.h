@interface AWEInviteFriendCellModel : NSObject
@property (nonatomic) NSString imageName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) Q type;
- (id)initWithTitle:imageName:type:;
- (id)initWithTitle:desc:imageName:type:;
- (void)setDesc:;
- (unsigned long long)type;
- (id)desc;
- (void)setType:;
- (void)setImageName:;
- (void).cxx_destruct;
- (id)title;
- (id)imageName;
- (void)setTitle:;
@end
