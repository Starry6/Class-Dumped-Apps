@interface AWECommentRelatedReadingAnchorModel : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:;
- (id)customExtraView;
- (id)componentSeparator;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)iconImageName;
@end
