@interface IESLiveFetchNewGiftTask : NSObject
@property (nonatomic) NSNumber giftID;
@property (nonatomic) GPBInt64Array requiredAssetsArray;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) q type;
@property (nonatomic) @? completionBlock;
- (void)setExtraParams:;
- (id)extraParams;
- (id)giftID;
- (id)requiredAssetsArray;
- (id)roomModel;
- (void)setGiftID:;
- (void)setRequiredAssetsArray:;
- (void)setRoomModel:;
- (void)setType:;
- (void)setCompletionBlock:;
- (long long)type;
- (void).cxx_destruct;
- (id)completionBlock;
@end
