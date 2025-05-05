@interface IESLiveClientDiagnoseResult : NSObject
@property (nonatomic) BOOL hasException;
@property (nonatomic) NSDictionary infoDict;
@property (nonatomic) NSDictionary overInfo;
- (BOOL)hasException;
- (id)overInfo;
- (void)setHasException:;
- (void)setOverInfo:;
- (void).cxx_destruct;
- (id)infoDict;
- (void)setInfoDict:;
@end
