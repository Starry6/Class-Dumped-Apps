@interface AWEEcomSearchMerchandisePatchChunkManager : NSObject
@property (nonatomic) NSMutableDictionary supportCardChunkDict;
@property (nonatomic) NSMutableDictionary costDict;
@property (nonatomic) NSMutableDictionary startTimeDict;
- (void)setCostDict:;
- (void)setStartTimeDict:;
- (void)setSupportCardChunkDict:;
- (id)supportCardChunkDict;
- (BOOL)isSupport:;
- (id)startTimeDict;
- (id)costDict;
- (BOOL)isFromCardChunk:;
- (void)startStatisticTime:;
- (void)endStatisticTime:;
- (id)costTrackParams;
- (id)init;
- (void).cxx_destruct;
+ (id)patchCardName:;
+ (id)patchCardType:;
+ (id)sharedInstance;
@end
