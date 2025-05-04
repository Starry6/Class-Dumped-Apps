@interface AWEFavoriteTagModel : NSObject
@property (nonatomic) NSString tagTitle;
@property (nonatomic) UIImage tagIcon;
@property (nonatomic) Q identifier;
@property (nonatomic) NSArray data;
@property (nonatomic) BOOL shownFlag;
@property (nonatomic) q count;
- (void)setTagTitle:;
- (id)tagTitle;
- (id)tagIcon;
- (void)setTagIcon:;
- (BOOL)shownFlag;
- (void)setShownFlag:;
- (void)setCount:;
- (void)setIdentifier:;
- (long long)count;
- (unsigned long long)identifier;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
@end
