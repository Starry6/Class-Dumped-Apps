@interface AWEEccsLoadHistoryMessageDataModel : IESLiveBridgeModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray messages;
- (void)setHasMore:;
- (id)messages;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setMessages:;
+ (id)modelCustomPropertyMapper;
@end
