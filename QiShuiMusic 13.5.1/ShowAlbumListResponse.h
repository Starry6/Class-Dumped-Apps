@interface ShowAlbumListResponse : IESLivePBBaseMessage
@property (nonatomic) ShowAlbumListExtra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
+ (id)descriptor;
@end
