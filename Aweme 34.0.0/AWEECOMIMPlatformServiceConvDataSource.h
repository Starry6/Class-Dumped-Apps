@interface AWEECOMIMPlatformServiceConvDataSource : NSObject
@property (nonatomic) NSArray curDataModels;
@property (nonatomic) AWEECOMIMNetworkImp networkImp;
@property (nonatomic) @? dataSourceUpdated;
@property (nonatomic) BOOL shouldNotMergeUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)markConversationReadWithModel:completion:;
- (void)markAllConversationReadWithCompletion:;
- (id)networkImp;
- (void)setNetworkImp:;
- (void)setDataSourceUpdated:;
- (void)fetchConversationsWithCompletion:;
- (id)curDataModels;
- (void)configConversationTopWithIsTop:model:completion:;
- (void)configConversationMuteWithIsMute:model:completion:;
- (void)deleteConversationWithModel:completion:;
- (id)dataSourceUpdated;
- (BOOL)shouldNotMergeUpdate;
- (void)setShouldNotMergeUpdate:;
- (void)businessConversationUpdate:;
- (void)setCurDataModels:;
- (void)readAllBusinessMessageWithBizType:completion:;
- (id)init;
- (void).cxx_destruct;
@end
