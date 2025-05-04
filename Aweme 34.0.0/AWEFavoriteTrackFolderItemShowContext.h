@interface AWEFavoriteTrackFolderItemShowContext : NSObject
@property (nonatomic) Q favoriteType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL ifHint;
@property (nonatomic) q index;
@property (nonatomic) NSString folderID;
@property (nonatomic) NSString folderName;
@property (nonatomic) NSString systemType;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setSystemType:;
- (unsigned long long)favoriteType;
- (void)setFavoriteType:;
- (BOOL)ifHint;
- (void)setIfHint:;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
- (id)folderID;
- (id)systemType;
- (id)folderName;
- (void)setFolderID:;
- (void)setFolderName:;
@end
