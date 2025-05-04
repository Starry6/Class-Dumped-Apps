@interface AWEHPEnterTabTrackModel : NSObject
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabID;
@property (nonatomic) AWEFeedChannelEnterModel enterModel;
@property (nonatomic) @? getCustomParamsBlock;
- (long long)tabType;
- (void)setEnterModel:;
- (id)enterModel;
- (void)setTabType:;
- (void)setTabID:;
- (void)setGetCustomParamsBlock:;
- (id)getCustomParamsBlock;
- (void).cxx_destruct;
- (id)tabID;
@end
