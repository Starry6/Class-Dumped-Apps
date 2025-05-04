@interface AWEFeedLiveMultiTabPageModel : NSObject
@property (nonatomic) NSMutableDictionary cellModelInfo;
@property (nonatomic) NSDictionary landingParams;
- (void)setLandingParams:;
- (id)landingParams;
- (id)cellModelInfo;
- (id)cellModelAtTabID:;
- (void)resetCellModelWithFeedLiveData:atTabID:pullType:;
- (void)setCellModelInfo:;
- (id)initWithParams:;
- (void).cxx_destruct;
@end
