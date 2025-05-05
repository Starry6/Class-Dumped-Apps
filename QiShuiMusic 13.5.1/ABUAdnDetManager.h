@interface ABUAdnDetManager : NSObject
@property (nonatomic) NSMutableDictionary rcdDict;
@property (nonatomic) NSDictionary adnDetFeDict;
@property (nonatomic) BOOL isNeedDet;
@property (nonatomic) NSLock adnDetFeDictLock;
@property (nonatomic) double sampleRatio;
- (id)rcdDict;
- (void)setSampleRatio:;
- (id)_detResultWithAdp:;
- (id)adnDetFeDict;
- (id)adnDetFeDictLock;
- (id)detResultWithAdnSlotId:;
- (void)detWithAdp:andAdnSlotId:;
- (BOOL)isNeedDet;
- (double)sampleRatio;
- (void)setAdnDetFeDict:;
- (void)setAdnDetFeDictLock:;
- (void)setAdnDnFe:;
- (void)setIsNeedDet:;
- (void)setRcdDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
