@interface AWEGrouponLifeFeedsAdTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logExtraFromAdData:;
- (id)creativeIdFromAdData:;
- (id)adIdFromAdData:;
- (void)trackAdWithLabel:adData:duration:extraParam:;
- (void)trackAdClickWithRefer:label:adData:extraParam:;
- (void)trackAdThirdIsShow:adData:;
@end
