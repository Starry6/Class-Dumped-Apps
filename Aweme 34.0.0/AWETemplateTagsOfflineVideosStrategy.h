@interface AWETemplateTagsOfflineVideosStrategy : NSObject
@property (nonatomic) AWETemplateTagsModel model;
@property (nonatomic) AWETemplateTagsContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraTrackParams;
- (id)initWithModel:context:;
- (void)didClickWithEvent:;
- (void)setModel:;
- (long long)templateType;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (id)activeInfo;
+ (BOOL)shouldActiveWithModel:context:;
+ (void)prepareWithModel:context:;
@end
