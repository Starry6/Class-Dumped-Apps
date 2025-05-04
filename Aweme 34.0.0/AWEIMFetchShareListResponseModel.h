@interface AWEIMFetchShareListResponseModel : NSObject
@property (nonatomic) NSArray transpondShareModelList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray abnormalList;
@property (nonatomic) BOOL abnormalDatabase;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) NSString emptyReason;
- (id)abnormalList;
- (void)setAbnormalList:;
- (void)setAbnormalDatabase:;
- (id)transpondShareModelList;
- (BOOL)abnormalDatabase;
- (void)setEmptyReason:;
- (void)setTranspondShareModelList:;
- (id)emptyReason;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setIsEmpty:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
