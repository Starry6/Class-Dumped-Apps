@interface AWEProfileFavoriteDataRequestService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestCollectionDataListWithCursor:count:completion:;
- (id)getExpectedSizeInfo;
@end
