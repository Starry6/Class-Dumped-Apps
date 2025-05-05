@interface IESECRelationInlinePlayItem : NSObject
@property (nonatomic) NSString videoID;
@property (nonatomic) NSArray playURLs;
@property (nonatomic) NSInteger aspectMode;
- (int)aspectMode;
- (id)playURLs;
- (void)setAspectMode:;
- (void)setPlayURLs:;
- (void).cxx_destruct;
- (id)videoID;
- (void)setVideoID:;
@end
