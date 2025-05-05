@interface IESLiveChunkDataHelper : NSObject
@property (nonatomic) q retLength;
@property (nonatomic) NSMutableData chunkData;
@property (nonatomic) NSData splitTagData;
@property (nonatomic) NSData endTagData;
- (void)chunkCompleteDataModel:callBack:;
- (id)chunkData;
- (long long)convertDataToInt:;
- (id)deleteSplitWithData:;
- (id)endTagData;
- (void)invokeCompletionWithData:error:paramsModel:callBack:;
- (void)parseChunkDataModel:callBack:;
- (long long)retLength;
- (void)setChunkData:;
- (void)setEndTagData:;
- (void)setRetLength:;
- (void)setSplitTagData:;
- (id)splitTagData;
- (id)subdata:withRange:;
- (id)transforDataFromChunData:withError:;
- (id)trimData:withTrimRange:;
- (id)init;
- (void).cxx_destruct;
@end
