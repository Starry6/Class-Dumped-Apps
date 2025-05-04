@interface AWEMixVideoCollectionListContext : NSObject
@property (nonatomic) AWEMixVideoModel mixModel;
@property (nonatomic) NSString mixID;
@property (nonatomic) NSString noticeID;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSArray insertCollectedUserIDs;
@property (nonatomic) NSString enterMethod;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)mixID;
- (void)setNoticeID:;
- (id)noticeID;
- (void)setMixID:;
- (id)mixModel;
- (void)setMixModel:;
- (void)setInsertCollectedUserIDs:;
- (id)insertCollectedUserIDs;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
@end
