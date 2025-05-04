@interface AWEFriendsShareItem : NSObject
@property (nonatomic) NSURL userImgUrl;
@property (nonatomic) NSString name;
@property (nonatomic) NSString suid;
@property (nonatomic) BOOL isFriend;
@property (nonatomic) {CGSize=dd} labelSize;
- (void)setIsFriend:;
- (id)initWithIMModel:;
- (id)userImgUrl;
- (id)suid;
- (void)setUserImgUrl:;
- (void)setSuid:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)labelSize;
- (void)setLabelSize:;
- (BOOL)isFriend;
@end
