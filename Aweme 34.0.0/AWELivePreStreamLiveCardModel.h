@interface AWELivePreStreamLiveCardModel : NSObject
@property (nonatomic) NSArray previewRoomsArray;
@property (nonatomic) NSArray unreadExtraArray;
@property (nonatomic) q contentCategory;
@property (nonatomic) NSString similarAnchorID;
@property (nonatomic) NSString title;
- (long long)contentCategory;
- (void)setContentCategory:;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)previewRoomsArray;
- (void)setPreviewRoomsArray:;
- (id)unreadExtraArray;
- (void)setUnreadExtraArray:;
- (void)setSimilarAnchorID:;
- (id)similarAnchorID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
