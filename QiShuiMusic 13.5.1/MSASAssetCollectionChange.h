@interface MSASAssetCollectionChange : NSObject
@property (nonatomic) NSString GUID;
@property (nonatomic) NSString ctag;
@property (nonatomic) BOOL wasDeleted;
- (id)GUID;
- (id)ctag;
- (BOOL)wasDeleted;
- (void).cxx_destruct;
- (void)setCtag:;
- (void)setWasDeleted:;
- (id)description;
- (void)setGUID:;
@end
