@interface AWELiveShelfServiceIMP : HTSService
@property (nonatomic) NSObject<AWELiveShelfService> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isWeakBCAAInstance;
- (id)getLiveRoomInfo;
- (BOOL)openNativeLiveShelfWithSource:type:params:;
- (id)getLiveRoomCouponInfo;
- (BOOL)shelfPageIsOpenNow;
- (id)getLiveStrategyData:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
