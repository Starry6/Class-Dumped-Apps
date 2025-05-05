@interface IESIMChallengeHeaderViewButtonConfiguration : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) IESIMURLModel iconURLModel;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString schema;
- (id)iconURLModel;
- (id)ironManURL;
- (void)setIconURLModel:;
- (void)setIronManURL:;
- (void)setOpenURL:;
- (id)schema;
- (void)setTitle:;
- (void)setSchema:;
- (id)title;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (id)openURL;
@end
