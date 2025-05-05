@interface GiftListResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSNumber roomID;
@property (nonatomic) q fetchMomentType;
@property (nonatomic) GiftsInfo giftsInfo;
@property (nonatomic) BOOL hasGiftsInfo;
@property (nonatomic) NSMutableArray giftsArray;
@property (nonatomic) Q giftsArray_Count;
@property (nonatomic) NSMutableArray pagesArray;
@property (nonatomic) Q pagesArray_Count;
@property (nonatomic) NSMutableArray doodleTemplatesArray;
@property (nonatomic) Q doodleTemplatesArray_Count;
- (long long)fetchMomentType;
- (void)setFetchMomentType:;
- (id)roomID;
- (void)setRoomID:;
+ (id)descriptor;
@end
