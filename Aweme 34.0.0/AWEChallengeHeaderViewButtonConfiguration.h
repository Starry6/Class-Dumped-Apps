@interface AWEChallengeHeaderViewButtonConfiguration : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel iconURLModel;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString schema;
- (void)setOpenURL:;
- (void)setIronManURL:;
- (id)ironManURL;
- (id)iconURLModel;
- (void)setIconURLModel:;
- (id)schema;
- (void)setSchema:;
- (void)setWebURL:;
- (void).cxx_destruct;
- (id)title;
- (id)webURL;
- (void)setTitle:;
- (id)openURL;
@end
