@interface IESLivePKLogHandler : NSObject
@property (nonatomic) <IESLivePKProvider> pkProvider;
@property (nonatomic) BOOL isAnchor;
- (id)completeAlogWithCategory:event:;
- (id)initWithDIContext:;
- (void)logErrorWithCategory:event:extra:;
- (void)logInfoWithCategory:event:extra:;
- (void)logWithLevel:category:event:extra:;
- (id)pkProvider;
- (id)rtcStatusStr;
- (void)setIsAnchor:;
- (void)setPkProvider:;
- (BOOL)isAnchor;
- (void).cxx_destruct;
@end
