@interface AWELiveSkylightRequestCompleteParams : NSObject
@property (nonatomic) BOOL hasSkylight;
@property (nonatomic) NSError requestError;
- (id)initWithHasSkylight:requestError:;
- (BOOL)hasSkylight;
- (void)setHasSkylight:;
- (void).cxx_destruct;
- (id)requestError;
- (void)setRequestError:;
@end
