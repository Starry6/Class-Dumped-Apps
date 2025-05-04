@interface AWENearbyC2FeedPreRequestModel : NSObject
@property (nonatomic) AWENearbyPageContext pageContext;
@property (nonatomic) AWENearbyGrouponResponse preRequestResponse;
@property (nonatomic) BOOL isReqOnAir;
@property (nonatomic) NSArray dataWillShowInFmp;
@property (nonatomic) @? completionWhenWillEnterGroupon;
- (id)initWithPageContext:;
- (id)dataWillShowInFmp;
- (id)preRequestResponse;
- (BOOL)isReqOnAir;
- (id)completionWhenWillEnterGroupon;
- (void)setCompletionWhenWillEnterGroupon:;
- (void)setIsReqOnAir:;
- (void)setPreRequestResponse:;
- (void)setDataWillShowInFmp:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
