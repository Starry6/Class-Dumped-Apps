@interface IESLiveCommentMontior : NSObject
@property (nonatomic) NSString indexType;
@property (nonatomic) double beginTimeStamp;
- (void)beginSend;
- (double)beginTimeStamp;
- (void)monitor:withError:;
- (void)sendFailureWithError:;
- (void)sendSuccessfully;
- (void)setBeginTimeStamp:;
- (id)switchTypeToString:;
- (void)setIndexType:;
- (id)indexType;
- (void).cxx_destruct;
- (id)initWithType:;
+ (void)monitorCommentInterfaceCallWithEnterFrom:newConfig:;
+ (void)monitorCommentPanelDisplayDuration:;
@end
