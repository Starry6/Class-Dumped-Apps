@interface AWESearchVideoFeedDetailContext : NSObject
@property (nonatomic) @ contextProvider;
@property (nonatomic) q videoFeedIndex;
@property (nonatomic) NSArray videoFeedArray;
@property (nonatomic) NSArray idList;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) @? searchvideoWatchedMonitorBlock;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterFrom;
- (void)setIdList:;
- (id)idList;
- (void)setVideoFeedIndex:;
- (long long)videoFeedIndex;
- (id)searchvideoWatchedMonitorBlock;
- (void)setSearchvideoWatchedMonitorBlock:;
- (void)setVideoFeedArray:;
- (id)videoFeedArray;
- (void).cxx_destruct;
- (id)contextProvider;
- (void)setContextProvider:;
@end
