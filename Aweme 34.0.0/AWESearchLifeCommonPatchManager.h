@interface AWESearchLifeCommonPatchManager : NSObject
@property (nonatomic) NSMutableDictionary dataDic;
@property (nonatomic) NSMutableDictionary callBackDic;
- (id)dataDic;
- (void)setDataDic:;
- (void)getDataWithDataID:completion:;
- (void)updateData:forDataID:;
- (id)callBackDic;
- (void)setCallBackDic:;
- (id)init;
- (void).cxx_destruct;
- (void)clearLocalCache;
@end
