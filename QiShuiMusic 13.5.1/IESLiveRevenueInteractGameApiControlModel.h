@interface IESLiveRevenueInteractGameApiControlModel : NSObject
@property (nonatomic) BOOL isEndRequesting;
@property (nonatomic) BOOL isReplyRequesting;
@property (nonatomic) BOOL isStartRequesting;
- (BOOL)isEndRequesting;
- (BOOL)isReplyRequesting;
- (BOOL)isStartRequesting;
- (void)setIsEndRequesting:;
- (void)setIsReplyRequesting:;
- (void)setIsStartRequesting:;
@end
