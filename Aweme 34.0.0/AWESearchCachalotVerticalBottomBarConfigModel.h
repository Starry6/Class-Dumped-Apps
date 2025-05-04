@interface AWESearchCachalotVerticalBottomBarConfigModel : NSObject
@property (nonatomic) q bottomBarType;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWESearchCachalotCommentBottomBarConfigModel commentBarConfig;
@property (nonatomic) AWESearchCachalotVerticalBottomBarConfigTopicDiscussExtraModel topicDiscussExtraConfig;
@property (nonatomic) BOOL shouldRemoveBottom;
- (void)setLogExtra:;
- (id)logExtra;
- (long long)bottomBarType;
- (void)setBottomBarType:;
- (id)commentBarConfig;
- (BOOL)shouldRemoveBottom;
- (void)setShouldRemoveBottom:;
- (void)setCommentBarConfig:;
- (void)setTopicDiscussExtraConfig:;
- (id)topicDiscussExtraConfig;
- (void).cxx_destruct;
@end
