@interface AWERTVLongVideoDataController : AWEListDataController
@property (nonatomic) NSString roomID;
@property (nonatomic) AWEListDataController recommendFeedDataController;
@property (nonatomic) BOOL enableFetchData;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)initWithRoomID:;
- (void)enableFetchData:;
- (BOOL)enableFetchData;
- (id)recommendFeedDataController;
- (void)setRecommendFeedDataController:;
- (void)setEnableFetchData:;
- (id)roomID;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setRoomID:;
@end
