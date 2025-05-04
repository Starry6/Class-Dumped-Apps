@interface AWEMemoriesAnchorData : NSObject
@property (nonatomic) NSString anchorId;
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString iconURL;
- (id)anchorId;
- (void)setAnchorId:;
- (void)setIconURL:;
- (id)content;
- (id)iconURL;
- (long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
