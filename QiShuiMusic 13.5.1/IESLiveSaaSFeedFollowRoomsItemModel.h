@interface IESLiveSaaSFeedFollowRoomsItemModel : NSObject
@property (nonatomic) # cellClass;
@property (nonatomic) NSArray rooms;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (id)enterFrom;
- (id)enterMethod;
- (id)initWithRooms:store:;
- (id)itemSizeInCollectionView:;
- (void)setEnterFrom:;
- (BOOL)showTitle;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)rooms;
- (void)setRooms:;
- (void)setCellClass:;
@end
