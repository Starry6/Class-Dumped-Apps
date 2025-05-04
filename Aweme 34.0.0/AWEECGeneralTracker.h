@interface AWEECGeneralTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isObjectEmpty:;
- (void)appendEntranceInfoWithModel:btmTrackerModel:scene:;
- (id)bcmBiz;
- (id)findParamsFromBcmNode:targetBtmArray:bcmKeyArray:;
- (id)findParamsFromBcmNode:bcmKeyArray:;
@end
