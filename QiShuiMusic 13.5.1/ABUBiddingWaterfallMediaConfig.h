@interface ABUBiddingWaterfallMediaConfig : NSObject
@property (nonatomic) NSString adnName;
@property (nonatomic) NSString adnSlotId;
- (id)adnName;
- (id)adnSlotId;
- (BOOL)matchingMediaSlotConfig:;
- (id)initWithDict:;
- (void).cxx_destruct;
@end
