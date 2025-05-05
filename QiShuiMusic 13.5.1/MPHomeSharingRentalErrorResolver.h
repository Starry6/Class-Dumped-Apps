@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver
@property (nonatomic) MPHomeSharingML3DataProvider dataProvider;
@property (nonatomic) Q itemID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)dataProvider;
- (unsigned long long)itemID;
- (void)setDataProvider:;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
- (void)requestDidFinish:;
- (void)resolveError:;
- (BOOL)_errorIsFairPlayError:;
- (id)initWithItemID:homeSharingID:rentalID:accountID:;
@end
