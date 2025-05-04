@interface AWEMusicCommentService : HTSService
@property (nonatomic) AWECommentGeneralMusicModel commentModel;
@property (nonatomic) AWEAwemeModel mockedModel;
@property (nonatomic) NSNumber commentCountTotal;
@property (nonatomic) NSString itemID;
@property (nonatomic) AWEUserModel author;
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commentModel;
- (void)setCommentModel:;
- (id)trackParams;
- (id)awemeInfo;
- (id)commentCountTotal;
- (BOOL)authorIsCurrentLoginUser;
- (BOOL)isAweme;
- (void)setMockedModel:;
- (id)mockedModel;
- (id)itemID;
- (id)author;
- (void).cxx_destruct;
+ (id)buildServiceWithModel:;
+ (id)createMusicCommentPanelConfigModel;
@end
