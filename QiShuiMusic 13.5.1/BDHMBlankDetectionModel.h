@interface BDHMBlankDetectionModel : NSObject
@property (nonatomic) q enterPageTs;
@property (nonatomic) q detectStartTs;
@property (nonatomic) Q pageStayDuration;
@property (nonatomic) q detectionType;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
- (void)setEnterPageTs:;
- (long long)detectStartTs;
- (long long)enterPageTs;
- (unsigned long long)pageStayDuration;
- (void)setDetectStartTs:;
- (id)rect;
- (void)setRect:;
- (long long)detectionType;
- (void)setDetectionType:;
@end
