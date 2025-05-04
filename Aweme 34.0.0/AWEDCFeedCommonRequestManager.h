@interface AWEDCFeedCommonRequestManager : NSObject
@property (nonatomic) NSMutableDictionary requestModelsDict;
- (void)addDoubleColumnPlayFinishModelItemID:referString:;
- (void)addDCFeedAwemeGid:referString:;
- (void)addDCFeedEnterFromPage:referString:;
- (id)getDoubleColumnPlayFinishModelsWithReferString:;
- (id)requestModelsDict;
- (id)getCommonRequestModelWithReferString:;
- (id)getDCFeedAwemeGidWithReferString:;
- (id)getDCFeedEnterFromPageWithReferString:;
- (void)setRequestModelsDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
