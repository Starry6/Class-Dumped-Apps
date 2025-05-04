@interface AWEFavoriteTrackFolderItemClickContext : NSObject
@property (nonatomic) Q favoriteType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL ifHint;
@property (nonatomic) q index;
@property (nonatomic) NSString folderID;
@property (nonatomic) NSString position;
@property (nonatomic) NSString systemType;
@property (nonatomic) NSString folderName;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setSystemType:;
- (unsigned long long)favoriteType;
- (void)setFavoriteType:;
- (BOOL)ifHint;
- (void)setIfHint:;
- (void)setIndex:;
- (long long)index;
- (id)position;
- (void).cxx_destruct;
- (id)folderID;
- (id)systemType;
- (void)setPosition:;
- (id)folderName;
- (void)setFolderID:;
- (void)setFolderName:;
@end
