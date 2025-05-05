@interface MSASPersonModelItem : NSObject
@property (nonatomic) NSInteger errorCount;
@property (nonatomic) MSASAlbum album;
@property (nonatomic) NSString albumGUID;
@property (nonatomic) <NSObject> object;
- (void)setAlbum:;
- (void)setObject:;
- (id)album;
- (int)errorCount;
- (void).cxx_destruct;
- (id)object;
- (void)setErrorCount:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)albumGUID;
- (void)setAlbumGUID:;
@end
