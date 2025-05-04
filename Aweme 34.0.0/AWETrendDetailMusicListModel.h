@interface AWETrendDetailMusicListModel : NSObject
@property (nonatomic) NSArray musicInfoList;
@property (nonatomic) BOOL isFromSkeleton;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)isFromSkeleton;
- (void)setIsFromSkeleton:;
- (id)musicInfoList;
- (id)initWithMusicInfoList:;
- (void)setMusicInfoList:;
- (void).cxx_destruct;
@end
