@interface AWEHotSearchCommentAISummaryHeaderModel : NSObject
@property (nonatomic) double width;
@property (nonatomic) NSNumber position;
@property (nonatomic) NSNumber commentCount;
@property (nonatomic) NSString titleText;
@property (nonatomic) double titleHeight;
@property (nonatomic) NSArray avatarUrlList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarUrlList;
- (id)cellSizeWithConstraintWidth:;
- (void)configWithSectionData:;
- (void)setTitleHeight:;
- (void)setAvatarUrlList:;
- (void)setWidth:;
- (id)position;
- (double)titleHeight;
- (void)setTitleText:;
- (double)width;
- (id)titleText;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)commentCount;
- (void)setCommentCount:;
@end
